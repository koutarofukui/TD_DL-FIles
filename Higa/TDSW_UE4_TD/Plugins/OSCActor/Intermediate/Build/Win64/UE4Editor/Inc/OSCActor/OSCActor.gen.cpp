// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCActor/Public/OSCActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCActor() {}
// Cross Module References
	OSCACTOR_API UScriptStruct* Z_Construct_UScriptStruct_FChannelData();
	UPackage* Z_Construct_UPackage__Script_OSCActor();
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCActor_NoRegister();
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	OSCACTOR_API UClass* Z_Construct_UClass_AOSCActorServer_NoRegister();
// End Cross Module References
class UScriptStruct* FChannelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OSCACTOR_API uint32 Get_Z_Construct_UScriptStruct_FChannelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelData, Z_Construct_UPackage__Script_OSCActor(), TEXT("ChannelData"), sizeof(FChannelData), Get_Z_Construct_UScriptStruct_FChannelData_Hash());
	}
	return Singleton;
}
template<> OSCACTOR_API UScriptStruct* StaticStruct<FChannelData>()
{
	return FChannelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChannelData(FChannelData::StaticStruct, TEXT("/Script/OSCActor"), TEXT("ChannelData"), false, nullptr, nullptr);
static struct FScriptStruct_OSCActor_StaticRegisterNativesFChannelData
{
	FScriptStruct_OSCActor_StaticRegisterNativesFChannelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChannelData")),new UScriptStruct::TCppStructOps<FChannelData>);
	}
} ScriptStruct_OSCActor_StaticRegisterNativesFChannelData;
	struct Z_Construct_UScriptStruct_FChannelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChannelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OSCActor,
		nullptr,
		&NewStructOps,
		"ChannelData",
		sizeof(FChannelData),
		alignof(FChannelData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChannelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChannelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OSCActor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChannelData"), sizeof(FChannelData), Get_Z_Construct_UScriptStruct_FChannelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChannelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChannelData_Hash() { return 3397289098U; }
	DEFINE_FUNCTION(AOSCActor::execOnMultiSampleParameterMessageReceived)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_AddressPattern);
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMultiSampleParameterMessageReceived(Z_Param_Out_AddressPattern,Z_Param_Out_Message,Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOSCActor::execOnParameterMessageReceived)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_AddressPattern);
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParameterMessageReceived(Z_Param_Out_AddressPattern,Z_Param_Out_Message,Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOSCActor::execOnTransformMessageReceived)
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
	DEFINE_FUNCTION(AOSCActor::execUpdateInstancedStaticMesh)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedStaticMesh);
		P_GET_TARRAY(FString,Z_Param_InCustomDataChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInstancedStaticMesh(Z_Param_InstancedStaticMesh,Z_Param_InCustomDataChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOSCActor::execGetMultiSampleParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_k);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetMultiSampleParam(Z_Param_k);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOSCActor::execGetParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_k);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParam(Z_Param_k,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	void AOSCActor::StaticRegisterNativesAOSCActor()
	{
		UClass* Class = AOSCActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMultiSampleParam", &AOSCActor::execGetMultiSampleParam },
			{ "GetParam", &AOSCActor::execGetParam },
			{ "OnMultiSampleParameterMessageReceived", &AOSCActor::execOnMultiSampleParameterMessageReceived },
			{ "OnParameterMessageReceived", &AOSCActor::execOnParameterMessageReceived },
			{ "OnTransformMessageReceived", &AOSCActor::execOnTransformMessageReceived },
			{ "UpdateInstancedStaticMesh", &AOSCActor::execUpdateInstancedStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics
	{
		struct OSCActor_eventGetMultiSampleParam_Parms
		{
			FString k;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_k_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_k;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventGetMultiSampleParam_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_k_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventGetMultiSampleParam_Parms, k), METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_k_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_k_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::NewProp_k,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCActor, nullptr, "GetMultiSampleParam", nullptr, nullptr, sizeof(OSCActor_eventGetMultiSampleParam_Parms), Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCActor_GetMultiSampleParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCActor_GetMultiSampleParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOSCActor_GetParam_Statics
	{
		struct OSCActor_eventGetParam_Parms
		{
			FString k;
			float DefaultValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_k_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_k;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventGetParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventGetParam_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_k_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventGetParam_Parms, k), METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_k_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_k_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCActor_GetParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_GetParam_Statics::NewProp_k,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_GetParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "CPP_Default_DefaultValue", "0.000000" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCActor_GetParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCActor, nullptr, "GetParam", nullptr, nullptr, sizeof(OSCActor_eventGetParam_Parms), Z_Construct_UFunction_AOSCActor_GetParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_GetParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_GetParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_GetParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCActor_GetParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCActor_GetParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics
	{
		struct OSCActor_eventOnMultiSampleParameterMessageReceived_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnMultiSampleParameterMessageReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnMultiSampleParameterMessageReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnMultiSampleParameterMessageReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnMultiSampleParameterMessageReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_AddressPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::NewProp_AddressPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCActor, nullptr, "OnMultiSampleParameterMessageReceived", nullptr, nullptr, sizeof(OSCActor_eventOnMultiSampleParameterMessageReceived_Parms), Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics
	{
		struct OSCActor_eventOnParameterMessageReceived_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnParameterMessageReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnParameterMessageReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnParameterMessageReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnParameterMessageReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_AddressPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::NewProp_AddressPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCActor, nullptr, "OnParameterMessageReceived", nullptr, nullptr, sizeof(OSCActor_eventOnParameterMessageReceived_Parms), Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics
	{
		struct OSCActor_eventOnTransformMessageReceived_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnTransformMessageReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnTransformMessageReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnTransformMessageReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventOnTransformMessageReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_IPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::NewProp_AddressPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCActor, nullptr, "OnTransformMessageReceived", nullptr, nullptr, sizeof(OSCActor_eventOnTransformMessageReceived_Parms), Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics
	{
		struct OSCActor_eventUpdateInstancedStaticMesh_Parms
		{
			UInstancedStaticMeshComponent* InstancedStaticMesh;
			TArray<FString> InCustomDataChannels;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCustomDataChannels;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InCustomDataChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InCustomDataChannels = { "InCustomDataChannels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventUpdateInstancedStaticMesh_Parms, InCustomDataChannels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InCustomDataChannels_Inner = { "InCustomDataChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InstancedStaticMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InstancedStaticMesh = { "InstancedStaticMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActor_eventUpdateInstancedStaticMesh_Parms, InstancedStaticMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InstancedStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InstancedStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InCustomDataChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InCustomDataChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::NewProp_InstancedStaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOSCActor, nullptr, "UpdateInstancedStaticMesh", nullptr, nullptr, sizeof(OSCActor_eventUpdateInstancedStaticMesh_Parms), Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOSCActor_NoRegister()
	{
		return AOSCActor::StaticClass();
	}
	struct Z_Construct_UClass_AOSCActor_Statics
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
	UObject* (*const Z_Construct_UClass_AOSCActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OSCActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOSCActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOSCActor_GetMultiSampleParam, "GetMultiSampleParam" }, // 1475904218
		{ &Z_Construct_UFunction_AOSCActor_GetParam, "GetParam" }, // 3799424822
		{ &Z_Construct_UFunction_AOSCActor_OnMultiSampleParameterMessageReceived, "OnMultiSampleParameterMessageReceived" }, // 734387222
		{ &Z_Construct_UFunction_AOSCActor_OnParameterMessageReceived, "OnParameterMessageReceived" }, // 187772524
		{ &Z_Construct_UFunction_AOSCActor_OnTransformMessageReceived, "OnTransformMessageReceived" }, // 1753517768
		{ &Z_Construct_UFunction_AOSCActor_UpdateInstancedStaticMesh, "UpdateInstancedStaticMesh" }, // 3868213013
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OSCActor.h" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCActor_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOSCActor_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOSCActor, ObjectName), METADATA_PARAMS(Z_Construct_UClass_AOSCActor_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActor_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOSCActor_Statics::NewProp_OSCServer_MetaData[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOSCActor_Statics::NewProp_OSCServer = { "OSCServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOSCActor, OSCServer), Z_Construct_UClass_AOSCActorServer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOSCActor_Statics::NewProp_OSCServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActor_Statics::NewProp_OSCServer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOSCActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOSCActor_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOSCActor_Statics::NewProp_OSCServer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOSCActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOSCActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOSCActor_Statics::ClassParams = {
		&AOSCActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOSCActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOSCActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOSCActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOSCActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOSCActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOSCActor, 1006793713);
	template<> OSCACTOR_API UClass* StaticClass<AOSCActor>()
	{
		return AOSCActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOSCActor(Z_Construct_UClass_AOSCActor, &AOSCActor::StaticClass, TEXT("/Script/OSCActor"), TEXT("AOSCActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOSCActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
