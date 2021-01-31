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
class USceneCaptureComponent2D;
#ifdef OSCACTOR_OSCCineCameraActor_generated_h
#error "OSCCineCameraActor.generated.h already included, missing '#pragma once' in OSCCineCameraActor.h"
#endif
#define OSCACTOR_OSCCineCameraActor_generated_h

#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_SPARSE_DATA
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCameraMessageReceived); \
	DECLARE_FUNCTION(execOnTransformMessageReceived); \
	DECLARE_FUNCTION(execCopyCameraSettingToSceneCaptureComponent2D);


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCameraMessageReceived); \
	DECLARE_FUNCTION(execOnTransformMessageReceived); \
	DECLARE_FUNCTION(execCopyCameraSettingToSceneCaptureComponent2D);


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOSCCineCameraActor(); \
	friend struct Z_Construct_UClass_AOSCCineCameraActor_Statics; \
public: \
	DECLARE_CLASS(AOSCCineCameraActor, ACineCameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSCActor"), NO_API) \
	DECLARE_SERIALIZER(AOSCCineCameraActor)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAOSCCineCameraActor(); \
	friend struct Z_Construct_UClass_AOSCCineCameraActor_Statics; \
public: \
	DECLARE_CLASS(AOSCCineCameraActor, ACineCameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSCActor"), NO_API) \
	DECLARE_SERIALIZER(AOSCCineCameraActor)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOSCCineCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOSCCineCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOSCCineCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOSCCineCameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOSCCineCameraActor(AOSCCineCameraActor&&); \
	NO_API AOSCCineCameraActor(const AOSCCineCameraActor&); \
public:


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOSCCineCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOSCCineCameraActor(AOSCCineCameraActor&&); \
	NO_API AOSCCineCameraActor(const AOSCCineCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOSCCineCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOSCCineCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOSCCineCameraActor)


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_19_PROLOG
#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_SPARSE_DATA \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_RPC_WRAPPERS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_INCLASS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_SPARSE_DATA \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSCACTOR_API UClass* StaticClass<class AOSCCineCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_OSCActor_Source_OSCActor_Public_OSCCineCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
