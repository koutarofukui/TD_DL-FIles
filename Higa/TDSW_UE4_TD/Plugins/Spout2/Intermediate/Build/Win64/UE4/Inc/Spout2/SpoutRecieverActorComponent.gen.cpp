// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spout2/Public/SpoutRecieverActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpoutRecieverActorComponent() {}
// Cross Module References
	SPOUT2_API UClass* Z_Construct_UClass_USpoutRecieverActorComponent_NoRegister();
	SPOUT2_API UClass* Z_Construct_UClass_USpoutRecieverActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Spout2();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void USpoutRecieverActorComponent::StaticRegisterNativesUSpoutRecieverActorComponent()
	{
	}
	UClass* Z_Construct_UClass_USpoutRecieverActorComponent_NoRegister()
	{
		return USpoutRecieverActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpoutRecieverActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscribeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubscribeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpoutRecieverActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Spout2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpoutRecieverActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Spout Reciever" },
		{ "IncludePath", "SpoutRecieverActorComponent.h" },
		{ "ModuleRelativePath", "Public/SpoutRecieverActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_InputTexture_MetaData[] = {
		{ "Category", "Spout2" },
		{ "ModuleRelativePath", "Public/SpoutRecieverActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_InputTexture = { "InputTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpoutRecieverActorComponent, InputTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_InputTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_InputTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_SubscribeName_MetaData[] = {
		{ "Category", "Spout2" },
		{ "ModuleRelativePath", "Public/SpoutRecieverActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_SubscribeName = { "SubscribeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpoutRecieverActorComponent, SubscribeName), METADATA_PARAMS(Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_SubscribeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_SubscribeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpoutRecieverActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_InputTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutRecieverActorComponent_Statics::NewProp_SubscribeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpoutRecieverActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpoutRecieverActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpoutRecieverActorComponent_Statics::ClassParams = {
		&USpoutRecieverActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpoutRecieverActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpoutRecieverActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpoutRecieverActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpoutRecieverActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpoutRecieverActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpoutRecieverActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpoutRecieverActorComponent, 1426516362);
	template<> SPOUT2_API UClass* StaticClass<USpoutRecieverActorComponent>()
	{
		return USpoutRecieverActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpoutRecieverActorComponent(Z_Construct_UClass_USpoutRecieverActorComponent, &USpoutRecieverActorComponent::StaticClass, TEXT("/Script/Spout2"), TEXT("USpoutRecieverActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpoutRecieverActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
