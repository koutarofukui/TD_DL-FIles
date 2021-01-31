// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCActor/Public/OSCActorFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCActorFunctionLibrary() {}
// Cross Module References
	OSCACTOR_API UClass* Z_Construct_UClass_UOSCActorFunctionLibrary_NoRegister();
	OSCACTOR_API UClass* Z_Construct_UClass_UOSCActorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OSCActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
// End Cross Module References
	DEFINE_FUNCTION(UOSCActorFunctionLibrary::execConvertGLtoUE4Matrix)
	{
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatrix*)Z_Param__Result=UOSCActorFunctionLibrary::ConvertGLtoUE4Matrix(Z_Param_Out_InMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCActorFunctionLibrary::execTRSToMatrix)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_tx);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ty);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tz);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rx);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ry);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rz);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sx);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sy);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sz);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatrix*)Z_Param__Result=UOSCActorFunctionLibrary::TRSToMatrix(Z_Param_tx,Z_Param_ty,Z_Param_tz,Z_Param_rx,Z_Param_ry,Z_Param_rz,Z_Param_sx,Z_Param_sy,Z_Param_sz);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCActorFunctionLibrary::execFloatArrayToMatrix)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_InArray);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_OutMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCActorFunctionLibrary::FloatArrayToMatrix(Z_Param_Out_InArray,Z_Param_Out_OutMatrix);
		P_NATIVE_END;
	}
	void UOSCActorFunctionLibrary::StaticRegisterNativesUOSCActorFunctionLibrary()
	{
		UClass* Class = UOSCActorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertGLtoUE4Matrix", &UOSCActorFunctionLibrary::execConvertGLtoUE4Matrix },
			{ "FloatArrayToMatrix", &UOSCActorFunctionLibrary::execFloatArrayToMatrix },
			{ "TRSToMatrix", &UOSCActorFunctionLibrary::execTRSToMatrix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct OSCActorFunctionLibrary_eventConvertGLtoUE4Matrix_Parms
		{
			FMatrix InMatrix;
			FMatrix ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMatrix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventConvertGLtoUE4Matrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::NewProp_InMatrix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::NewProp_InMatrix = { "InMatrix", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventConvertGLtoUE4Matrix_Parms, InMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::NewProp_InMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::NewProp_InMatrix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::NewProp_InMatrix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "DisplayName", "Convert GL to UE4 Matrix" },
		{ "ModuleRelativePath", "Public/OSCActorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCActorFunctionLibrary, nullptr, "ConvertGLtoUE4Matrix", nullptr, nullptr, sizeof(OSCActorFunctionLibrary_eventConvertGLtoUE4Matrix_Parms), Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct OSCActorFunctionLibrary_eventFloatArrayToMatrix_Parms
		{
			TArray<float> InArray;
			FMatrix OutMatrix;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMatrix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCActorFunctionLibrary_eventFloatArrayToMatrix_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OSCActorFunctionLibrary_eventFloatArrayToMatrix_Parms), &Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_OutMatrix = { "OutMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventFloatArrayToMatrix_Parms, OutMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventFloatArrayToMatrix_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_InArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_InArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_OutMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_InArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::NewProp_InArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCActorFunctionLibrary, nullptr, "FloatArrayToMatrix", nullptr, nullptr, sizeof(OSCActorFunctionLibrary_eventFloatArrayToMatrix_Parms), Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct OSCActorFunctionLibrary_eventTRSToMatrix_Parms
		{
			float tx;
			float ty;
			float tz;
			float rx;
			float ry;
			float rz;
			float sx;
			float sy;
			float sz;
			FMatrix ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sz;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sx;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rz;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ry;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rx;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tz;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ty;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_sz = { "sz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, sz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_sy = { "sy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, sy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_sx = { "sx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, sx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_rz = { "rz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, rz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_ry = { "ry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, ry), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_rx = { "rx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, rx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_tz = { "tz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, tz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_ty = { "ty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, ty), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_tx = { "tx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OSCActorFunctionLibrary_eventTRSToMatrix_Parms, tx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_sz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_sy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_sx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_rz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_ry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_rx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_tz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_ty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::NewProp_tx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSCActor" },
		{ "ModuleRelativePath", "Public/OSCActorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCActorFunctionLibrary, nullptr, "TRSToMatrix", nullptr, nullptr, sizeof(OSCActorFunctionLibrary_eventTRSToMatrix_Parms), Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOSCActorFunctionLibrary_NoRegister()
	{
		return UOSCActorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOSCActorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OSCActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOSCActorFunctionLibrary_ConvertGLtoUE4Matrix, "ConvertGLtoUE4Matrix" }, // 734378534
		{ &Z_Construct_UFunction_UOSCActorFunctionLibrary_FloatArrayToMatrix, "FloatArrayToMatrix" }, // 306045077
		{ &Z_Construct_UFunction_UOSCActorFunctionLibrary_TRSToMatrix, "TRSToMatrix" }, // 3443446392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OSCActorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OSCActorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOSCActorFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::ClassParams = {
		&UOSCActorFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOSCActorFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOSCActorFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOSCActorFunctionLibrary, 2688143123);
	template<> OSCACTOR_API UClass* StaticClass<UOSCActorFunctionLibrary>()
	{
		return UOSCActorFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOSCActorFunctionLibrary(Z_Construct_UClass_UOSCActorFunctionLibrary, &UOSCActorFunctionLibrary::StaticClass, TEXT("/Script/OSCActor"), TEXT("UOSCActorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOSCActorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
