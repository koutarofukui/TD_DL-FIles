// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spout2/Public/EditorTickActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTickActor() {}
// Cross Module References
	SPOUT2_API UClass* Z_Construct_UClass_AEditorTickActor_NoRegister();
	SPOUT2_API UClass* Z_Construct_UClass_AEditorTickActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Spout2();
// End Cross Module References
	void AEditorTickActor::StaticRegisterNativesAEditorTickActor()
	{
	}
	UClass* Z_Construct_UClass_AEditorTickActor_NoRegister()
	{
		return AEditorTickActor::StaticClass();
	}
	struct Z_Construct_UClass_AEditorTickActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEditorTickActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Spout2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEditorTickActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorTickActor.h" },
		{ "ModuleRelativePath", "Public/EditorTickActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEditorTickActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEditorTickActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEditorTickActor_Statics::ClassParams = {
		&AEditorTickActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEditorTickActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEditorTickActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEditorTickActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEditorTickActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEditorTickActor, 3235446204);
	template<> SPOUT2_API UClass* StaticClass<AEditorTickActor>()
	{
		return AEditorTickActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEditorTickActor(Z_Construct_UClass_AEditorTickActor, &AEditorTickActor::StaticClass, TEXT("/Script/Spout2"), TEXT("AEditorTickActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEditorTickActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
