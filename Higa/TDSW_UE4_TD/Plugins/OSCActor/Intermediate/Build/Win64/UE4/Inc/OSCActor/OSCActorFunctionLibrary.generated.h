// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMatrix;
#ifdef OSCACTOR_OSCActorFunctionLibrary_generated_h
#error "OSCActorFunctionLibrary.generated.h already included, missing '#pragma once' in OSCActorFunctionLibrary.h"
#endif
#define OSCACTOR_OSCActorFunctionLibrary_generated_h

#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_SPARSE_DATA
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertGLtoUE4Matrix); \
	DECLARE_FUNCTION(execTRSToMatrix); \
	DECLARE_FUNCTION(execFloatArrayToMatrix);


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertGLtoUE4Matrix); \
	DECLARE_FUNCTION(execTRSToMatrix); \
	DECLARE_FUNCTION(execFloatArrayToMatrix);


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOSCActorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOSCActorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOSCActorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSCActor"), NO_API) \
	DECLARE_SERIALIZER(UOSCActorFunctionLibrary)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOSCActorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOSCActorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOSCActorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSCActor"), NO_API) \
	DECLARE_SERIALIZER(UOSCActorFunctionLibrary)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCActorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCActorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCActorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCActorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCActorFunctionLibrary(UOSCActorFunctionLibrary&&); \
	NO_API UOSCActorFunctionLibrary(const UOSCActorFunctionLibrary&); \
public:


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCActorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCActorFunctionLibrary(UOSCActorFunctionLibrary&&); \
	NO_API UOSCActorFunctionLibrary(const UOSCActorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCActorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCActorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCActorFunctionLibrary)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_12_PROLOG
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_RPC_WRAPPERS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_INCLASS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_SPARSE_DATA \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSCACTOR_API UClass* StaticClass<class UOSCActorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCActorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
