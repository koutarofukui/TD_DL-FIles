// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCActor/Public/OSCCineCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCCineCameraActor() {}
// Cross Module References
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCCineCameraActor_NoRegister();
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCCineCameraActor();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_OSCActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress();
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCActorServer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOSCCineCameraActor::execOnCameraMessageReceived)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_AddressPattern);
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraMessageReceived(Z_Param_Out_AddressPattern,Z_Param_Out_Message,Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOSCCineCameraActor::execOnTransformMessageReceived)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_AddressPattern);
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransformMessageReceived(Z_Param_Out_AddressPattern,Z_Param_Out_Message,Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOSCCineCameraActor::execCopyCameraSettingToSceneCaptureComponent2D)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_SceneCaptureComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyCameraSettingToSceneCaptureComponent2D(Z_Param_SceneCaptureComponent);
		P_NATIVE_END;
	}
	void AOSCCineCameraActor::StaticRegisterNativesAOSCCineCameraActor()
	{
		UClass* Class = AOSCCineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyCameraSettingToSceneCaptureComponent2D", &AOSCCineCameraActor::execCopyCameraSettingToSceneCaptureComponent2D },
			{ "OnCameraMessageReceived", &AOSCCineCameraActor::execOnCameraMessageReceived },
			{ "OnTransformMessageReceived", &AOSCCineCameraActor::execOnTransformMessageReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics
	{
		struct OSCCineCameraActor_eventCopyCameraSettingToSceneCaptureComponent2D_Parms
		{
			USceneCaptureComponent2D* SceneCaptureComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneCaptureComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::NewProp_SceneCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::NewProp_SceneCaptureComponent = { "SceneCaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventCopyCameraSettingToSceneCaptureComponent2D_Parms, SceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::NewProp_SceneCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::NewProp_SceneCaptureComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::NewProp_SceneCaptureComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCCineCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCCineCameraActor, nullptr, "CopyCameraSettingToSceneCaptureComponent2D", nullptr, nullptr, sizeof(OSCCineCameraActor_eventCopyCameraSettingToSceneCaptureComponent2D_Parms), Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics
	{
		struct OSCCineCameraActor_eventOnCameraMessageReceived_Parms
		{
			FOSCAddress AddressPattern;
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddressPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnCameraMessageReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnCameraMessageReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnCameraMessageReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnCameraMessageReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_AddressPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::NewProp_AddressPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCCineCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCCineCameraActor, nullptr, "OnCameraMessageReceived", nullptr, nullptr, sizeof(OSCCineCameraActor_eventOnCameraMessageReceived_Parms), Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics
	{
		struct OSCCineCameraActor_eventOnTransformMessageReceived_Parms
		{
			FOSCAddress AddressPattern;
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddressPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnTransformMessageReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnTransformMessageReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnTransformMessageReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCCineCameraActor_eventOnTransformMessageReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCCineCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCCineCameraActor, nullptr, "OnTransformMessageReceived", nullptr, nullptr, sizeof(OSCCineCameraActor_eventOnTransformMessageReceived_Parms), Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOSCCineCameraActor_NoRegister()
	{
		return AOSCCineCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AOSCCineCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OSCServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OSCServer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOSCCineCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OSCActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOSCCineCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOSCCineCameraActor_CopyCameraSettingToSceneCaptureComponent2D, "CopyCameraSettingToSceneCaptureComponent2D" }, // 2520860796
		{ &Z_Construct_UFunction_AOSCCineCameraActor_OnCameraMessageReceived, "OnCameraMessageReceived" }, // 1603745508
		{ &Z_Construct_UFunction_AOSCCineCameraActor_OnTransformMessageReceived, "OnTransformMessageReceived" }, // 3722724515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCCineCameraActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "OSCCineCameraActor.h" },
		{ "ModuleRelativePath", "Public/OSCCineCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCCineCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOSCCineCameraActor, ObjectName), METADATA_PARAMS(Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_OSCServer_MetaData[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCCineCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_OSCServer = { "OSCServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOSCCineCameraActor, OSCServer), Z_Construct_UClass_AOSCActorServer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_OSCServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_OSCServer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOSCCineCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOSCCineCameraActor_Statics::NewProp_OSCServer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOSCCineCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOSCCineCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOSCCineCameraActor_Statics::ClassParams = {
		&AOSCCineCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOSCCineCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOSCCineCameraActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOSCCineCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCCineCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOSCCineCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOSCCineCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOSCCineCameraActor, 4091807693);
	template<> OSCACTOR_API UClass* StaticClass<AOSCCineCameraActor>()
	{
		return AOSCCineCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOSCCineCameraActor(Z_Construct_UClass_AOSCCineCameraActor, &AOSCCineCameraActor::StaticClass, TEXT("/Script/OSCActor"), TEXT("AOSCCineCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOSCCineCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
