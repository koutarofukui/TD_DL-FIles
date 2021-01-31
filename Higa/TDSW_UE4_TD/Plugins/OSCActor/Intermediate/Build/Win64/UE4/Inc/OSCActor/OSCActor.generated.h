// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOSCAddress;
struct FOSCMessage;
class UInstancedStaticMeshComponent;
#ifdef OSCACTOR_OSCActor_generated_h
#error "OSCActor.generated.h already included, missing '#pragma once' in OSCActor.h"
#endif
#define OSCACTOR_OSCActor_generated_h

#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChannelData_Statics; \
	OSCACTOR_API static class UScriptStruct* StaticStruct();


template<> OSCACTOR_API UScriptStruct* StaticStruct<struct FChannelData>();

#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_SPARSE_DATA
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMultiSampleParameterMessageReceived); \
	DECLARE_FUNCTION(execOnParameterMessageReceived); \
	DECLARE_FUNCTION(execOnTransformMessageReceived); \
	DECLARE_FUNCTION(execUpdateInstancedStaticMesh); \
	DECLARE_FUNCTION(execGetMultiSampleParam); \
	DECLARE_FUNCTION(execGetParam);


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMultiSampleParameterMessageReceived); \
	DECLARE_FUNCTION(execOnParameterMessageReceived); \
	DECLARE_FUNCTION(execOnTransformMessageReceived); \
	DECLARE_FUNCTION(execUpdateInstancedStaticMesh); \
	DECLARE_FUNCTION(execGetMultiSampleParam); \
	DECLARE_FUNCTION(execGetParam);


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOSCActor(); \
	friend struct Z_Construct_UClass_AOSCActor_Statics; \
public: \
	DECLARE_CLASS(AOSCActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSCActor"), NO_API) \
	DECLARE_SERIALIZER(AOSCActor)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAOSCActor(); \
	friend struct Z_Construct_UClass_AOSCActor_Statics; \
public: \
	DECLARE_CLASS(AOSCActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSCActor"), NO_API) \
	DECLARE_SERIALIZER(AOSCActor)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOSCActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOSCActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOSCActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOSCActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOSCActor(AOSCActor&&); \
	NO_API AOSCActor(const AOSCActor&); \
public:


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOSCActor(AOSCActor&&); \
	NO_API AOSCActor(const AOSCActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOSCActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOSCActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOSCActor)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_23_PROLOG
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_SPARSE_DATA \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_RPC_WRAPPERS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_INCLASS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_SPARSE_DATA \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSCACTOR_API UClass* StaticClass<class AOSCActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
