// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveSubSystem.h"

#ifdef SUBSYSTEMS_SaveSubSystem_generated_h
#error "SaveSubSystem.generated.h already included, missing '#pragma once' in SaveSubSystem.h"
#endif
#define SUBSYSTEMS_SaveSubSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USaveSubSystem ***********************************************************
#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USaveSubSystem_Statics;
SUBSYSTEMS_API UClass* Z_Construct_UClass_USaveSubSystem(ETypeConstructPhase);

#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_USaveSubSystem_Statics; \
	friend SUBSYSTEMS_API UClass* ::Z_Construct_UClass_USaveSubSystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(USaveSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SubSystems"), Z_Construct_UClass_USaveSubSystem) \
	DECLARE_SERIALIZER(USaveSubSystem)


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSubSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaveSubSystem(USaveSubSystem&&) = delete; \
	USaveSubSystem(const USaveSubSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSubSystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSubSystem) \
	NO_API virtual ~USaveSubSystem();


#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_12_PROLOG
#define FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_15_CALLBACK_WRAPPERS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaveSubSystem;

// ********** End Class USaveSubSystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
