#include "OSCActor.h"

#include "OSCManager.h"

AOSCActor::AOSCActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AOSCActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (OSCServer)
	{
		OSCServer->OnOSCServerStartedInternal.AddLambda([this](UOSCServer* OSCServer) {
			{
				OnTransformMessageReceivedEvent.BindUFunction(this, FName("OnTransformMessageReceived"));

				auto addr = FOSCAddress(FString::Format(TEXT("/tr/{0}"), { *ObjectName }));
				OSCServer->BindEventToOnOSCAddressPatternMatchesPath(addr, OnTransformMessageReceivedEvent);
			}

			{
				OnTransformMessageReceivedEvent.BindUFunction(this, FName("OnParameterMessageReceived"));

				auto addr = FOSCAddress(FString::Format(TEXT("/ss/{0}/*"), { *ObjectName }));
				OSCServer->BindEventToOnOSCAddressPatternMatchesPath(addr, OnParameterMessageReceivedEvent);
			}

			{
				OnMultiSampleParameterMessageReceivedEvent.BindUFunction(this, FName("OnMultiSampleParameterMessageReceived"));

				auto addr = FOSCAddress(FString::Format(TEXT("/ms/{0}/*"), { *ObjectName }));
				OSCServer->BindEventToOnOSCAddressPatternMatchesPath(addr, OnMultiSampleParameterMessageReceivedEvent);
			}
		});
	}
}

void AOSCActor::BeginPlay()
{
	Super::BeginPlay();

	Params.Reset();
	MultiSampleParams.Reset();
}

float AOSCActor::GetParam(const FString& k, float DefaultValue)
{
	if (!Params.Contains(k))
		return DefaultValue;

	return Params[k];
}

static float getSample(const TArray<float>& c, int index, float default_value = 0)
{
	if (c.Num() == 0) return default_value;
	return c[index];
}

void AOSCActor::UpdateInstancedStaticMesh(UInstancedStaticMeshComponent* InstancedStaticMesh, TArray<FString> InCustomDataChannels)
{
	TArray<FInstancedStaticMeshInstanceData> InstanceData;

	const TArray<float>& tx = GetMultiSampleParam("tx");
	const TArray<float>& ty = GetMultiSampleParam("ty");
	const TArray<float>& tz = GetMultiSampleParam("tz");

	const TArray<float>& rx = GetMultiSampleParam("rx");
	const TArray<float>& ry = GetMultiSampleParam("ry");
	const TArray<float>& rz = GetMultiSampleParam("rz");

	const TArray<float>& sx = GetMultiSampleParam("sx");
	const TArray<float>& sy = GetMultiSampleParam("sy");
	const TArray<float>& sz = GetMultiSampleParam("sz");

	const TArray<float>& vx = GetMultiSampleParam("vx");
	const TArray<float>& vy = GetMultiSampleParam("vy");
	const TArray<float>& vz = GetMultiSampleParam("vz");

	TArray<TArray<float>> SrcCustomDataChannels;
	for (int i = 0; i < InCustomDataChannels.Num(); i++)
	{
		const TArray<float>& a = GetMultiSampleParam(InCustomDataChannels[i]);
		
		if (a.Num() != MultiSampleNum)
		{
			UE_LOG(LogTemp, Log, TEXT("Invalid Channel Name: %s"), *InCustomDataChannels[i]);
			return;
		}

		SrcCustomDataChannels.Add(a);
	}

	const bool hasDirection = (vx.Num() > 0) && (vy.Num() > 0) && (vz.Num() > 0);

	InstanceData.SetNum(MultiSampleNum);

	if (InstancedStaticMesh->GetInstanceCount() != MultiSampleNum)
	{
		while (InstancedStaticMesh->GetInstanceCount() < MultiSampleNum) {
			FTransform T;
			InstancedStaticMesh->AddInstance(T);
		}

		while (InstancedStaticMesh->GetInstanceCount() > MultiSampleNum)
		{
			InstancedStaticMesh->RemoveInstance(0);
		}
	}

	InstancedStaticMesh->NumCustomDataFloats = InCustomDataChannels.Num();
	InstancedStaticMesh->PerInstanceSMCustomData.SetNum(InstancedStaticMesh->NumCustomDataFloats * MultiSampleNum);

	float* CustomData = InstancedStaticMesh->PerInstanceSMCustomData.GetData();

	for (int i = 0; i < MultiSampleNum; i++)
	{
		FMatrix T = FMatrix::Identity;

		T *= FScaleMatrix::Make(FVector(
			getSample(sx, i, 1), 
			getSample(sy, i, 1), 
			getSample(sz, i, 1)
		));

		if (hasDirection)
		{
			FQuat RR = FQuat::FindBetween(FVector(0, 0, 1), FVector(
				getSample(vx, i, 0),
				getSample(vy, i, 0),
				getSample(vz, i, 0))
			);
			T *= FRotationMatrix::Make(RR);
		}
		
		T *= FRotationMatrix::Make(FRotator(
			-getSample(ry, i),
			getSample(rz, i),
			-getSample(rx, i)
		));

		T *= FTranslationMatrix::Make(FVector(
			getSample(tx, i),
			getSample(ty, i),
			getSample(tz, i)
		));

		InstanceData[i].Transform = UOSCActorFunctionLibrary::ConvertGLtoUE4Matrix(T);

		for (int n = 0; n < InstancedStaticMesh->NumCustomDataFloats; n++)
		{
			*CustomData = SrcCustomDataChannels[n][i];
			CustomData++;
		}
	}

	InstancedStaticMesh->BatchUpdateInstancesData(0, MultiSampleNum, InstanceData.GetData(), true);
}

const TArray<float>& AOSCActor::GetMultiSampleParam(const FString& k)
{
	if (!MultiSampleParams.Contains(k))
	{
		static const TArray<float> a;
		return a;
	}

	const auto& s = MultiSampleParams[k];
	return s.Samples;
}

void AOSCActor::OnTransformMessageReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port)
{
	if (!Message.GetPacket().IsValid())
		return;

	TArray<float> OutValues;
	UOSCManager::GetAllFloats(Message, OutValues);

	const float* a = OutValues.GetData();
	FMatrix M = UOSCActorFunctionLibrary::TRSToMatrix(
		a[0], a[1], a[2],
		a[3], a[4], a[5],
		a[6], a[7], a[8]
	);

	M = UOSCActorFunctionLibrary::ConvertGLtoUE4Matrix(M);

	SetActorTransform(FTransform(M));
}

void AOSCActor::OnParameterMessageReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port)
{
	TArray<float> OutValues;
	UOSCManager::GetAllFloats(Message, OutValues);

	if (OutValues.Num() == 0)
		return;

	const auto& k = Message.GetAddress().GetMethod();
	float v = OutValues.Last();

	Params.Add(k, v);
}

void AOSCActor::OnMultiSampleParameterMessageReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port)
{
	const auto& k = Message.GetAddress().GetMethod();

	if (k == "frame_end")
	{
		MultiSampleParams = MultiSampleParams_back;
		MultiSampleParams_back.Reset();

		int n = 0;
		UOSCManager::GetInt32(Message, 0, n);
		MultiSampleNum = n;
	}

	FChannelData v;
	UOSCManager::GetAllFloats(Message, v.Samples);

	if (v.Samples.Num() == 0)
		return;

	MultiSampleParams_back.Add(k, v);
}
