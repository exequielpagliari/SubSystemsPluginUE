// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GraphicsSubSystem.h"

#ifdef SUBSYSTEMS_GraphicsSubSystem_generated_h
#error "GraphicsSubSystem.generated.h already included, missing '#pragma once' in GraphicsSubSystem.h"
#endif
#define SUBSYSTEMS_GraphicsSubSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSupportedResolution;

// ********** Begin ScriptStruct FSupportedResolution **********************************************
struct Z_Construct_UScriptStruct_FSupportedResolution_Statics;
SUBSYSTEMS_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedResolution(ETypeConstructPhase);

#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSupportedResolution_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSupportedResolution(ETypeConstructPhase::Inner); }


struct FSupportedResolution;
// ********** End ScriptStruct FSupportedResolution ************************************************

// ********** Begin Class UGraphicsSubSystem *******************************************************
#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunHardwareBenchmark); \
	DECLARE_FUNCTION(execSaveAndApplySettings); \
	DECLARE_FUNCTION(execGetSupportedScreenResolutions); \
	DECLARE_FUNCTION(execSetResolutionScale); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execGetOverallGraphicsQuality); \
	DECLARE_FUNCTION(execSetOverallGraphicsQuality); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execSetFrameRateLimit); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execSetScreenResolution);


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGraphicsSubSystem_Statics;
SUBSYSTEMS_API UClass* Z_Construct_UClass_UGraphicsSubSystem(ETypeConstructPhase);

#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGraphicsSubSystem_Statics; \
	friend SUBSYSTEMS_API UClass* ::Z_Construct_UClass_UGraphicsSubSystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGraphicsSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubSystems"), Z_Construct_UClass_UGraphicsSubSystem) \
	DECLARE_SERIALIZER(UGraphicsSubSystem)


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGraphicsSubSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraphicsSubSystem(UGraphicsSubSystem&&) = delete; \
	UGraphicsSubSystem(const UGraphicsSubSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphicsSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphicsSubSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphicsSubSystem) \
	NO_API virtual ~UGraphicsSubSystem();


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_29_PROLOG
#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_CALLBACK_WRAPPERS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraphicsSubSystem;

// ********** End Class UGraphicsSubSystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
