// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSubSystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAudioSubSystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundMix(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_SubSystems(ETypeConstructPhase);
SUBSYSTEMS_API UClass* Z_Construct_UClass_UAudioSubSystem(ETypeConstructPhase);
SUBSYSTEMS_API UClass* Z_Construct_UClass_UAudioSubSystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAudioSubSystem Function PlayMusic ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAudioSubSystem_PlayMusic_Statics
struct UHT_STATICS
{
	struct AudioSubSystem_eventPlayMusic_Parms
	{
		USoundBase* NewTrack;
		float FadeInTime;
		float FadeOutTime;
		bool bLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reproduce una pista de m\xef\xbf\xbdsica con transici\xef\xbf\xbdn suave (Crossfade) desde la pista actual. */" },
#endif
		{ "CPP_Default_bLoop", "true" },
		{ "CPP_Default_FadeInTime", "1.500000" },
		{ "CPP_Default_FadeOutTime", "1.500000" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reproduce una pista de m\xef\xbf\xbdsica con transici\xef\xbf\xbdn suave (Crossfade) desde la pista actual." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayMusic constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTrack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static void NewProp_bLoop_SetBit(void* Obj)
	{
		((AudioSubSystem_eventPlayMusic_Parms*)Obj)->bLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayMusic constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayMusic Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewTrack = { "NewTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventPlayMusic_Parms, NewTrack), Z_Construct_UClass_USoundBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventPlayMusic_Parms, FadeInTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventPlayMusic_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioSubSystem_eventPlayMusic_Parms), &UHT_STATICS::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayMusic Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAudioSubSystem, nullptr, "PlayMusic", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AudioSubSystem_eventPlayMusic_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AudioSubSystem_eventPlayMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSubSystem_PlayMusic(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAudioSubSystem::execPlayMusic)
{
	P_GET_OBJECT(USoundBase,Z_Param_NewTrack);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayMusic(Z_Param_NewTrack,Z_Param_FadeInTime,Z_Param_FadeOutTime,Z_Param_bLoop);
	P_NATIVE_END;
}
// ********** End Class UAudioSubSystem Function PlayMusic *****************************************

// ********** Begin Class UAudioSubSystem Function PlaySound2D *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAudioSubSystem_PlaySound2D_Statics
struct UHT_STATICS
{
	struct AudioSubSystem_eventPlaySound2D_Parms
	{
		USoundBase* Sound;
		float VolumeMultiplier;
		float PitchMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|SFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reproduce un efecto de sonido 2D (sin ubicaci\xef\xbf\xbdn espacial) para UI o feedback general. */" },
#endif
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reproduce un efecto de sonido 2D (sin ubicaci\xef\xbf\xbdn espacial) para UI o feedback general." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlaySound2D constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlaySound2D constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlaySound2D Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventPlaySound2D_Parms, Sound), Z_Construct_UClass_USoundBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventPlaySound2D_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventPlaySound2D_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PitchMultiplier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlaySound2D Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAudioSubSystem, nullptr, "PlaySound2D", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AudioSubSystem_eventPlaySound2D_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AudioSubSystem_eventPlaySound2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSubSystem_PlaySound2D(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAudioSubSystem::execPlaySound2D)
{
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySound2D(Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier);
	P_NATIVE_END;
}
// ********** End Class UAudioSubSystem Function PlaySound2D ***************************************

// ********** Begin Class UAudioSubSystem Function ReceiveDeinitialize *****************************
static FName NAME_UAudioSubSystem_ReceiveDeinitialize = FName(TEXT("ReceiveDeinitialize"));
void UAudioSubSystem::ReceiveDeinitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UAudioSubSystem_ReceiveDeinitialize);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Deinitialize" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveDeinitialize constinit property declarations *******************
// ********** End Function ReceiveDeinitialize constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAudioSubSystem, nullptr, "ReceiveDeinitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UAudioSubSystem Function ReceiveDeinitialize *******************************

// ********** Begin Class UAudioSubSystem Function ReceiveInitialize *******************************
static FName NAME_UAudioSubSystem_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
void UAudioSubSystem::ReceiveInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UAudioSubSystem_ReceiveInitialize);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End USubsystem\n" },
#endif
		{ "DisplayName", "On Initialize" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End USubsystem" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveInitialize constinit property declarations *********************
// ********** End Function ReceiveInitialize constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAudioSubSystem, nullptr, "ReceiveInitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UAudioSubSystem Function ReceiveInitialize *********************************

// ********** Begin Class UAudioSubSystem Function SetChannelVolume ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAudioSubSystem_SetChannelVolume_Statics
struct UHT_STATICS
{
	struct AudioSubSystem_eventSetChannelVolume_Parms
	{
		USoundClass* TargetClass;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifica el volumen de un SoundClass espec\xef\xbf\xbd""fico (0.0 a 1.0). */" },
#endif
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifica el volumen de un SoundClass espec\xef\xbf\xbd""fico (0.0 a 1.0)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetChannelVolume constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetChannelVolume constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetChannelVolume Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetClass = { "TargetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventSetChannelVolume_Parms, TargetClass), Z_Construct_UClass_USoundClass, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventSetChannelVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetChannelVolume Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAudioSubSystem, nullptr, "SetChannelVolume", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AudioSubSystem_eventSetChannelVolume_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AudioSubSystem_eventSetChannelVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSubSystem_SetChannelVolume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAudioSubSystem::execSetChannelVolume)
{
	P_GET_OBJECT(USoundClass,Z_Param_TargetClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChannelVolume(Z_Param_TargetClass,Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UAudioSubSystem Function SetChannelVolume **********************************

// ********** Begin Class UAudioSubSystem Function StopMusic ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAudioSubSystem_StopMusic_Statics
struct UHT_STATICS
{
	struct AudioSubSystem_eventStopMusic_Parms
	{
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Audio|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Detiene la m\xef\xbf\xbdsica actual con un Fade Out. */" },
#endif
		{ "CPP_Default_FadeOutTime", "1.500000" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detiene la m\xef\xbf\xbdsica actual con un Fade Out." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopMusic constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopMusic constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopMusic Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AudioSubSystem_eventStopMusic_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StopMusic Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAudioSubSystem, nullptr, "StopMusic", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AudioSubSystem_eventStopMusic_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AudioSubSystem_eventStopMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioSubSystem_StopMusic(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAudioSubSystem::execStopMusic)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMusic(Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// ********** End Class UAudioSubSystem Function StopMusic *****************************************

// ********** Begin Class UAudioSubSystem **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAudioSubSystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem global para la gesti\xef\xbf\xbdn de audio, m\xef\xbf\xbdsica con fading y control de volumen por canales.\n */" },
#endif
		{ "IncludePath", "AudioSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem global para la gesti\xef\xbf\xbdn de audio, m\xef\xbf\xbdsica con fading y control de volumen por canales." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainSoundMix_MetaData[] = {
		{ "Category", "Audio|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Referencia al SoundMix principal usado para aplicar modificaciones de volumen en caliente. */" },
#endif
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al SoundMix principal usado para aplicar modificaciones de volumen en caliente." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMusicComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Componente que sostiene la pista de m\xef\xbf\xbdsica actual en reproducci\xef\xbf\xbdn. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente que sostiene la pista de m\xef\xbf\xbdsica actual en reproducci\xef\xbf\xbdn." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAudioSubSystem constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainSoundMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMusicComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAudioSubSystem constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PlayMusic"), .Pointer = &UAudioSubSystem::execPlayMusic },
		{ .NameUTF8 = UTF8TEXT("PlaySound2D"), .Pointer = &UAudioSubSystem::execPlaySound2D },
		{ .NameUTF8 = UTF8TEXT("SetChannelVolume"), .Pointer = &UAudioSubSystem::execSetChannelVolume },
		{ .NameUTF8 = UTF8TEXT("StopMusic"), .Pointer = &UAudioSubSystem::execStopMusic },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioSubSystem_PlayMusic, "PlayMusic" }, // 24611f32d02499111fcd292b0a3da146b531e14f
		{ &Z_Construct_UFunction_UAudioSubSystem_PlaySound2D, "PlaySound2D" }, // aebd5db830a1c96d9385fe7c41aaec665cdf2fdd
		{ &Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize, "ReceiveDeinitialize" }, // c0d6217ec0127378032a3c7bbeee4a00659fa8e7
		{ &Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize, "ReceiveInitialize" }, // 911aea49ce64c9a37a957f79cd4a7cbb99d89e8a
		{ &Z_Construct_UFunction_UAudioSubSystem_SetChannelVolume, "SetChannelVolume" }, // 11c487bee480b9348d413e9b0e88f8263cc79ce9
		{ &Z_Construct_UFunction_UAudioSubSystem_StopMusic, "StopMusic" }, // a5ea8986ee72d0bf8014ab4ec18207230133c717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAudioSubSystem Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MainSoundMix = { "MainSoundMix", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSubSystem, MainSoundMix), Z_Construct_UClass_USoundMix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainSoundMix_MetaData), NewProp_MainSoundMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentMusicComponent = { "CurrentMusicComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioSubSystem, CurrentMusicComponent), Z_Construct_UClass_UAudioComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMusicComponent_MetaData), NewProp_CurrentMusicComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MainSoundMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentMusicComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAudioSubSystem Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SubSystems,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAudioSubSystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAudioSubSystem_StaticRegisterNativesUAudioSubSystem()
{
	UClass* Class = UAudioSubSystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAudioSubSystem;
UClass* Z_Construct_UClass_UAudioSubSystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAudioSubSystem;
		if (!Z_Registration_Info_UClass_UAudioSubSystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AudioSubSystem"),
				Z_Registration_Info_UClass_UAudioSubSystem.InnerSingleton,
				UAudioSubSystem_StaticRegisterNativesUAudioSubSystem,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAudioSubSystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAudioSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSubSystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSubSystem.OuterSingleton;
}
#undef UHT_STATICS
UAudioSubSystem::UAudioSubSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAudioSubSystem);
UAudioSubSystem::~UAudioSubSystem() {}
// ********** End Class UAudioSubSystem ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h__Script_SubSystems_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSubSystem, TEXT("UAudioSubSystem"), &Z_Registration_Info_UClass_UAudioSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSubSystem), 1716673760U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_AudioSubSystem_h__Script_SubSystems_3551917605bd359d0d1d61423adea45dffa511d4{
	TEXT("/Script/SubSystems"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
