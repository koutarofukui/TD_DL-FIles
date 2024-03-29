// Fill out your copyright notice in the Description page of Project Settings.

#include "SpoutRecieverActorComponent.h"

#include <string>

#include "Windows/AllowWindowsPlatformTypes.h" 
#include <d3d11.h>
#include "Spout.h"
#include "Windows/HideWindowsPlatformTypes.h"

#include "GlobalShader.h"
#include "UniformBuffer.h"
#include "RHICommandList.h"
#include "RHIUtilities.h"

static spoutSenderNames senders;

class FTextureCopyVertexShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FTextureCopyVertexShader, Global);
public:

	static bool ShouldCache(EShaderPlatform Platform) { return true; }

	FTextureCopyVertexShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer) :
		FGlobalShader(Initializer)
	{}
	FTextureCopyVertexShader() {}

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}
};

class FTextureCopyPixelShader : public FGlobalShader
{
	DECLARE_SHADER_TYPE(FTextureCopyPixelShader, Global);
public:

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
	LAYOUT_FIELD(FShaderResourceParameter, SrcTexture);
#else ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 24
	FShaderResourceParameter SrcTexture;

	virtual bool Serialize(FArchive& Ar) override
	{
		bool bShaderHasOutdatedParams = FGlobalShader::Serialize(Ar);
		Ar << SrcTexture;
		return bShaderHasOutdatedParams;
	}
#endif

	static bool ShouldCache(EShaderPlatform Platform) { return true; }

	FTextureCopyPixelShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer) :
		FGlobalShader(Initializer)
	{
		SrcTexture.Bind(Initializer.ParameterMap, TEXT("SrcTexture"));
	}
	FTextureCopyPixelShader() {}

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
	}
};

struct FTextureVertex
{
	FVector4 Position;
	FVector2D UV;
};

class FSimpleVertexBuffer : public FVertexBuffer
{
public:
	void InitRHI() override
	{
		TResourceArray<FTextureVertex, VERTEXBUFFER_ALIGNMENT> Vertices;
		Vertices.SetNumUninitialized(4);

		Vertices[0].Position = FVector4(-1.0f, 1.0f, 0, 1.0f);
		Vertices[1].Position = FVector4(1.0f, 1.0f, 0, 1.0f);
		Vertices[2].Position = FVector4(-1.0f, -1.0f, 0, 1.0f);
		Vertices[3].Position = FVector4(1.0f, -1.0f, 0, 1.0f);
		Vertices[0].UV = FVector2D(0, 0);
		Vertices[1].UV = FVector2D(1, 0);
		Vertices[2].UV = FVector2D(0, 1);
		Vertices[3].UV = FVector2D(1, 1);

		FRHIResourceCreateInfo CreateInfo(&Vertices);
		VertexBufferRHI = RHICreateVertexBuffer(Vertices.GetResourceDataSize(), BUF_Static, CreateInfo);
	}
};

TGlobalResource<FSimpleVertexBuffer> GSimpleVertexBuffer;

class FTextureVertexDeclaration : public FRenderResource
{
public:
	FVertexDeclarationRHIRef VertexDeclarationRHI;

	virtual void InitRHI() override
	{
		FVertexDeclarationElementList Elements;
		uint32 Stride = sizeof(FTextureVertex);
		Elements.Add(FVertexElement(0, STRUCT_OFFSET(FTextureVertex, Position), VET_Float4, 0, Stride));
		Elements.Add(FVertexElement(0, STRUCT_OFFSET(FTextureVertex, UV), VET_Float2, 1, Stride));
		VertexDeclarationRHI = RHICreateVertexDeclaration(Elements);
	}

	virtual void ReleaseRHI() override
	{
		VertexDeclarationRHI.SafeRelease();
	}
};

TGlobalResource<FTextureVertexDeclaration> GSimpleVertexDeclaration;

class FSimpleIndexBuffer : public FIndexBuffer
{
public:
	void InitRHI() override
	{
		const uint16 Indices[] = { 0, 1, 2, 3 };

		TResourceArray<uint16, INDEXBUFFER_ALIGNMENT> IndexBuffer;
		uint32 NumIndices = UE_ARRAY_COUNT(Indices);
		IndexBuffer.AddUninitialized(NumIndices);
		FMemory::Memcpy(IndexBuffer.GetData(), Indices, NumIndices * sizeof(uint16));

		FRHIResourceCreateInfo CreateInfo(&IndexBuffer);
		IndexBufferRHI = RHICreateIndexBuffer(sizeof(uint16), IndexBuffer.GetResourceDataSize(), BUF_Static, CreateInfo);
	}
};

TGlobalResource<FSimpleIndexBuffer> GSimpleIndexBuffer;

IMPLEMENT_SHADER_TYPE(, FTextureCopyPixelShader, TEXT("/Plugin/Spout2/SpoutReceiverCopyShader.usf"), TEXT("MainPixelShader"), SF_Pixel)
IMPLEMENT_SHADER_TYPE(, FTextureCopyVertexShader, TEXT("/Plugin/Spout2/SpoutReceiverCopyShader.usf"), TEXT("MainVertexShader"), SF_Vertex)

//////////////////////////////////////////////////////////////////////////

USpoutRecieverActorComponent::USpoutRecieverActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	bTickInEditor = true;
}

// Called when the game starts
void USpoutRecieverActorComponent::BeginPlay()
{
	Super::BeginPlay();
}

void USpoutRecieverActorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void USpoutRecieverActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!InputTexture)
		return;

	static ANSICHAR AnsiName[NAME_SIZE];
	SubscribeName.GetPlainANSIString(AnsiName);

	unsigned int width = 0, height = 0;
	HANDLE hSharehandle = nullptr;
	DXGI_FORMAT dwFormat = DXGI_FORMAT_UNKNOWN;

	FScopeLock Lock(&Mutex);

	bool find_sender = senders.FindSender((char*)AnsiName, width, height, hSharehandle, (DWORD&)dwFormat);

	if (!find_sender
		|| dwFormat == DXGI_FORMAT_UNKNOWN)
		return;

	InitResource(width, height, InputTexture);

	{
		FTextureRenderTargetResource* RenderTargetResource = InputTexture->GameThread_GetRenderTargetResource();

		ENQUEUE_RENDER_COMMAND(RenderThreadOp)([this, hSharehandle, RenderTargetResource](FRHICommandListImmediate& RHICmdList) {
			FScopeLock Lock(&Mutex);
			this->Tick_RenderThread(RHICmdList, hSharehandle, RenderTargetResource);
		});
	}
}

void USpoutRecieverActorComponent::Tick_RenderThread(
	FRHICommandListImmediate& RHICmdList,
	void* hSharehandle,
	FTextureRenderTargetResource* RenderTargetResource
)
{
	check(IsInRenderingThread());

	if (!GWorld
		|| !IntermediateTexture2D) return;

	ID3D11Device* D3D11Device = (ID3D11Device*)GDynamicRHI->RHIGetNativeDevice();
	FShaderResourceViewRHIRef IntermediateTextureParameterSRV;
	ERHIFeatureLevel::Type FeatureLevel = GWorld->Scene->GetFeatureLevel();

	//////////////////////////////////////////////////////////////////////////
	// Copy Spout shared texture to UTexture2D

	{
		ID3D11Resource* resource = nullptr;

		if (D3D11Device->OpenSharedResource(hSharehandle, __uuidof(ID3D11Resource), (void**)(&resource)) == S_OK)
		{
			check(resource);

			ID3D11Texture2D* SrcTexture = (ID3D11Texture2D*)resource;

			FTextureReferenceRHIRef TRefRHI = IntermediateTexture2D->TextureReference.TextureReferenceRHI;

			if (!TRefRHI)
				return;

			FRHITexture* RHITex = TRefRHI->GetReferencedTexture();
			check(RHITex);

			ID3D11Texture2D* DstTexture = (ID3D11Texture2D*)RHITex->GetNativeResource();
			check(DstTexture);

			ID3D11DeviceContext* Context;
			D3D11Device->GetImmediateContext(&Context);

			Context->CopyResource(DstTexture, SrcTexture);
			Context->Flush();

			resource->Release();
		}
		else
		{
			return;
		}

		//////////////////////////////////////////////////////////////////////////

		if (!IntermediateTextureParameterSRV.IsValid())
		{
			auto Resource = IntermediateTexture2D->Resource;
			auto ParamRef = (Resource->TextureRHI.GetReference());
			IntermediateTextureParameterSRV = RHICreateShaderResourceView(ParamRef, 0);
			check(IntermediateTextureParameterSRV.IsValid());
		}

		//////////////////////////////////////////////////////////////////////////

		FRHIRenderPassInfo RPInfo(RenderTargetResource->GetRenderTargetTexture(), ERenderTargetActions::DontLoad_Store, RenderTargetResource->TextureRHI);

		RHICmdList.BeginRenderPass(RPInfo, TEXT("CopySpoutImage"));
		{
			FIntPoint OutputSize(RenderTargetResource->GetSizeX(), RenderTargetResource->GetSizeY());

			auto* GlobalShaderMap = GetGlobalShaderMap(FeatureLevel);
			TShaderMapRef< FTextureCopyVertexShader > VertexShader(GlobalShaderMap);
			TShaderMapRef< FTextureCopyPixelShader > PixelShader(GlobalShaderMap);

			// Set the graphic pipeline state.
			FGraphicsPipelineStateInitializer GraphicsPSOInit;
			RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
			GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
			GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
			GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
			GraphicsPSOInit.PrimitiveType = PT_TriangleStrip;
			GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GSimpleVertexDeclaration.VertexDeclarationRHI;

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
			GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
			GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
#else ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 24
			GraphicsPSOInit.BoundShaderState.VertexShaderRHI = GETSAFERHISHADER_VERTEX(*VertexShader);
			GraphicsPSOInit.BoundShaderState.PixelShaderRHI = GETSAFERHISHADER_PIXEL(*PixelShader);
#endif

			SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

			RHICmdList.SetViewport(0, 0, 0.0, OutputSize.X, OutputSize.Y, 1.f);

			if (PixelShader->SrcTexture.IsBound())
			{
				auto PixelShaderRHI = GraphicsPSOInit.BoundShaderState.PixelShaderRHI;
				RHICmdList.SetShaderResourceViewParameter(PixelShaderRHI, PixelShader->SrcTexture.GetBaseIndex(), IntermediateTextureParameterSRV);
			}

			RHICmdList.SetStreamSource(0, GSimpleVertexBuffer.VertexBufferRHI, 0);

			RHICmdList.DrawIndexedPrimitive(
				GSimpleIndexBuffer.IndexBufferRHI,
				/*BaseVertexIndex=*/ 0,
				/*MinIndex=*/ 0,
				/*NumVertices=*/ 4,
				/*StartIndex=*/ 0,
				/*NumPrimitives=*/ 2,
				/*NumInstances=*/ 1);
		}
		RHICmdList.EndRenderPass();
	}
}

void USpoutRecieverActorComponent::InitResource(int width, int height, UTextureRenderTarget2D* DestTextureRenderTarget2D)
{
	auto fmt = DestTextureRenderTarget2D->GetFormat();

	if (IntermediateTexture2D == nullptr
		|| IntermediateTexture2D->IsValidLowLevel() == false
		|| IntermediateTexture2D->Resource == false
		|| width != IntermediateTexture2D->GetSurfaceWidth()
		|| height != IntermediateTexture2D->GetSurfaceHeight())
	{
		IntermediateTexture2D = UTexture2D::CreateTransient(width, height,
			DestTextureRenderTarget2D->GetFormat());
		IntermediateTexture2D->UpdateResource();
	}
}

void USpoutRecieverActorComponent::DisposeResource()
{
	IntermediateTexture2D = nullptr;
}
