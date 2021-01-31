// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spout2/Public/SpoutSenderActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpoutSenderActorComponent() {}
// Cross Module References
	SPOUT2_API UClass* Z_Construct_UClass_USpoutSenderActorComponent_NoRegister();
	SPOUT2_API UClass* Z_Construct_UClass_USpoutSenderActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Spout2();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	void USpoutSenderActorComponent::StaticRegisterNativesUSpoutSenderActorComponent()
	{
	}
	UClass* Z_Construct_UClass_USpoutSenderActorComponent_NoRegister()
	{
		return USpoutSenderActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpoutSenderActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PublishName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpoutSenderActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Spout2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpoutSenderActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Spout Sender" },
		{ "IncludePath", "SpoutSenderActorComponent.h" },
		{ "ModuleRelativePath", "Public/SpoutSenderActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_OutputTexture_MetaData[] = {
		{ "Category", "Spout2" },
		{ "ModuleRelativePath", "Public/SpoutSenderActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_OutputTexture = { "OutputTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpoutSenderActorComponent, OutputTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_OutputTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_OutputTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_PublishName_MetaData[] = {
		{ "Category", "Spout2" },
		{ "ModuleRelativePath", "Public/SpoutSenderActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_PublishName = { "PublishName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpoutSenderActorComponent, PublishName), METADATA_PARAMS(Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_PublishName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_PublishName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpoutSenderActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_OutputTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderActorComponent_Statics::NewProp_PublishName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpoutSenderActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpoutSenderActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpoutSenderActorComponent_Statics::ClassParams = {
		&USpoutSenderActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpoutSenderActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpoutSenderActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpoutSenderActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpoutSenderActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpoutSenderActorComponent, 948989811);
	template<> SPOUT2_API UClass* StaticClass<USpoutSenderActorComponent>()
	{
		return USpoutSenderActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpoutSenderActorComponent(Z_Construct_UClass_USpoutSenderActorComponent, &USpoutSenderActorComponent::StaticClass, TEXT("/Script/Spout2"), TEXT("USpoutSenderActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpoutSenderActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
