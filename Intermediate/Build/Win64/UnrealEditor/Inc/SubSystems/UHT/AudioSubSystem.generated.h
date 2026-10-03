// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSubSystem.h"

#ifdef SUBSYSTEMS_AudioSubSystem_generated_h
#error "AudioSubSystem.generated.h already included, missing '#pragma once' in AudioSubSystem.h"
#endif
#define SUBSYSTEMS_AudioSubSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
class USoundClass;

// ********** Begin Class UAudioSubSystem **********************************************************
#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetChannelVolume); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execStopMusic); \
	DECLARE_FUNCTION(execPlayMusic);


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAudioSubSystem_Statics;
SUBSYSTEMS_API UClass* Z_Construct_UClass_UAudioSubSystem(ETypeConstructPhase);

#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAudioSubSystem_Statics; \
	friend SUBSYSTEMS_API UClass* ::Z_Construct_UClass_UAudioSubSystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAudioSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SubSystems"), Z_Construct_UClass_UAudioSubSystem) \
	DECLARE_SERIALIZER(UAudioSubSystem)


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSubSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioSubSystem(UAudioSubSystem&&) = delete; \
	UAudioSubSystem(const UAudioSubSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSubSystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioSubSystem) \
	NO_API virtual ~UAudioSubSystem();


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_17_PROLOG
#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_CALLBACK_WRAPPERS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioSubSystem;

// ********** End Class UAudioSubSystem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
