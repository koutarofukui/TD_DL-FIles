// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCActor/Public/OSCActorServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCActorServer() {}
// Cross Module References
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCActorServer_NoRegister();
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCActorServer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OSCActor();
	OSC_API UClass* Z_Construct_UClass_UOSCServer_NoRegister();
// End Cross Module References
	void AOSCActorServer::StaticRegisterNativesAOSCActorServer()
	{
	}
	UClass* Z_Construct_UClass_AOSCActorServer_NoRegister()
	{
		return AOSCActorServer::StaticClass();
	}
	struct Z_Construct_UClass_AOSCActorServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OSCServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OSCServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOSCActorServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OSCActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCActorServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OSCActorServer.h" },
		{ "ModuleRelativePath", "Public/OSCActorServer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCActorServer_Statics::NewProp_OSCServer_MetaData[] = {
		{ "ModuleRelativePath", "Public/OSCActorServer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOSCActorServer_Statics::NewProp_OSCServer = { "OSCServer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOSCActorServer, OSCServer), Z_Construct_UClass_UOSCServer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOSCActorServer_Statics::NewProp_OSCServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActorServer_Statics::NewProp_OSCServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCActorServer_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActorServer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AOSCActorServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOSCActorServer, Port), METADATA_PARAMS(Z_Construct_UClass_AOSCActorServer_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActorServer_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOSCActorServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOSCActorServer_Statics::NewProp_OSCServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOSCActorServer_Statics::NewProp_Port,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOSCActorServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOSCActorServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOSCActorServer_Statics::ClassParams = {
		&AOSCActorServer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOSCActorServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActorServer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOSCActorServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActorServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOSCActorServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOSCActorServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOSCActorServer, 867039061);
	template<> OSCACTOR_API UClass* StaticClass<AOSCActorServer>()
	{
		return AOSCActorServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOSCActorServer(Z_Construct_UClass_AOSCActorServer, &AOSCActorServer::StaticClass, TEXT("/Script/OSCActor"), TEXT("AOSCActorServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOSCActorServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
