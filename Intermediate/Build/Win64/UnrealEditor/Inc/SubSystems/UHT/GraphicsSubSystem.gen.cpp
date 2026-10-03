// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsSubSystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGraphicsSubSystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_SubSystems(ETypeConstructPhase);
SUBSYSTEMS_API UClass* Z_Construct_UClass_UGraphicsSubSystem(ETypeConstructPhase);
SUBSYSTEMS_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedResolution(ETypeConstructPhase);
SUBSYSTEMS_API UClass* Z_Construct_UClass_UGraphicsSubSystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSupportedResolution **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSupportedResolution_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSupportedResolution>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSupportedResolution); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Estructura auxiliar para representar resoluciones viables en UI */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Estructura auxiliar para representar resoluciones viables en UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Graphics" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Texto preformateado para la UI, ej: \"1920x1080\" */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texto preformateado para la UI, ej: \"1920x1080\"" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSupportedResolution constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSupportedResolution constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportedResolution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSupportedResolution Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportedResolution, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportedResolution, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FSupportedResolution, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSupportedResolution Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SubSystems,
	nullptr,
	&NewStructOps,
	"SupportedResolution",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSupportedResolution>(),
	alignof(FSupportedResolution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSupportedResolution;
UScriptStruct* Z_Construct_UScriptStruct_FSupportedResolution(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSupportedResolution.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSupportedResolution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportedResolution, (UObject*)Z_Construct_UPackage__Script_SubSystems(ETypeConstructPhase::Outer), TEXT("SupportedResolution"));
		}
		return Z_Registration_Info_UScriptStruct_FSupportedResolution.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSupportedResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSupportedResolution.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSupportedResolution.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSupportedResolution ************************************************

// ********** Begin Class UGraphicsSubSystem Function GetOverallGraphicsQuality ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_GetOverallGraphicsQuality_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventGetOverallGraphicsQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Obtiene el nivel de calidad global actual (-1 si la calidad es personalizada por componente). */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obtiene el nivel de calidad global actual (-1 si la calidad es personalizada por componente)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOverallGraphicsQuality constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOverallGraphicsQuality constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOverallGraphicsQuality Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventGetOverallGraphicsQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOverallGraphicsQuality Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "GetOverallGraphicsQuality", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventGetOverallGraphicsQuality_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventGetOverallGraphicsQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_GetOverallGraphicsQuality(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execGetOverallGraphicsQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOverallGraphicsQuality();
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function GetOverallGraphicsQuality **********************

// ********** Begin Class UGraphicsSubSystem Function GetScreenResolution **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_GetScreenResolution_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventGetScreenResolution_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Obtiene la resoluci\xef\xbf\xbdn actual configurada en GameUserSettings. */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obtiene la resoluci\xef\xbf\xbdn actual configurada en GameUserSettings." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetScreenResolution constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetScreenResolution constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetScreenResolution Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventGetScreenResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetScreenResolution Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "GetScreenResolution", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventGetScreenResolution_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventGetScreenResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_GetScreenResolution(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execGetScreenResolution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetScreenResolution();
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function GetScreenResolution ****************************

// ********** Begin Class UGraphicsSubSystem Function GetSupportedScreenResolutions ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_GetSupportedScreenResolutions_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventGetSupportedScreenResolutions_Parms
	{
		TArray<FSupportedResolution> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Consulta al driver/hardware (RHI) y devuelve \xef\xbf\xbdnicamente las resoluciones soportadas por la pantalla.\n\x09 * Filtra duplicados con distintas tasas de refresco para dejar solo resoluciones \xef\xbf\xbdnicas.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consulta al driver/hardware (RHI) y devuelve \xef\xbf\xbdnicamente las resoluciones soportadas por la pantalla.\nFiltra duplicados con distintas tasas de refresco para dejar solo resoluciones \xef\xbf\xbdnicas." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSupportedScreenResolutions constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSupportedScreenResolutions constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSupportedScreenResolutions Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSupportedResolution, METADATA_PARAMS(0, nullptr) }; // c70ab91cbf0b2c4d3daf3cbd08149f99ea333d0c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventGetSupportedScreenResolutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // c70ab91cbf0b2c4d3daf3cbd08149f99ea333d0c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSupportedScreenResolutions Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "GetSupportedScreenResolutions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventGetSupportedScreenResolutions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventGetSupportedScreenResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_GetSupportedScreenResolutions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execGetSupportedScreenResolutions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSupportedResolution>*)Z_Param__Result=P_THIS->GetSupportedScreenResolutions();
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function GetSupportedScreenResolutions ******************

// ********** Begin Class UGraphicsSubSystem Function ReceiveDeinitialize **************************
static FName NAME_UGraphicsSubSystem_ReceiveDeinitialize = FName(TEXT("ReceiveDeinitialize"));
void UGraphicsSubSystem::ReceiveDeinitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UGraphicsSubSystem_ReceiveDeinitialize);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Deinitialize" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveDeinitialize constinit property declarations *******************
// ********** End Function ReceiveDeinitialize constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "ReceiveDeinitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UGraphicsSubSystem Function ReceiveDeinitialize ****************************

// ********** Begin Class UGraphicsSubSystem Function ReceiveInitialize ****************************
static FName NAME_UGraphicsSubSystem_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
void UGraphicsSubSystem::ReceiveInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UGraphicsSubSystem_ReceiveInitialize);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End USubsystem\n" },
#endif
		{ "DisplayName", "On Initialize" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End USubsystem" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveInitialize constinit property declarations *********************
// ********** End Function ReceiveInitialize constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "ReceiveInitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UGraphicsSubSystem Function ReceiveInitialize ******************************

// ********** Begin Class UGraphicsSubSystem Function RunHardwareBenchmark *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_RunHardwareBenchmark_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Restablece los ajustes a los valores recomendados por el motor seg\xef\xbf\xbdn el hardware detectado. */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restablece los ajustes a los valores recomendados por el motor seg\xef\xbf\xbdn el hardware detectado." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RunHardwareBenchmark constinit property declarations ******************
// ********** End Function RunHardwareBenchmark constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "RunHardwareBenchmark", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_RunHardwareBenchmark(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execRunHardwareBenchmark)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunHardwareBenchmark();
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function RunHardwareBenchmark ***************************

// ********** Begin Class UGraphicsSubSystem Function SaveAndApplySettings *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SaveAndApplySettings_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSaveAndApplySettings_Parms
	{
		bool bCheckForCommandLineOverrides;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Guarda las configuraciones actuales en el archivo de configuraci\xef\xbf\xbdn (.ini) y las aplica en pantalla. */" },
#endif
		{ "CPP_Default_bCheckForCommandLineOverrides", "false" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guarda las configuraciones actuales en el archivo de configuraci\xef\xbf\xbdn (.ini) y las aplica en pantalla." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SaveAndApplySettings constinit property declarations ******************
	static void NewProp_bCheckForCommandLineOverrides_SetBit(void* Obj)
	{
		((GraphicsSubSystem_eventSaveAndApplySettings_Parms*)Obj)->bCheckForCommandLineOverrides = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForCommandLineOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveAndApplySettings constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveAndApplySettings Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCheckForCommandLineOverrides = { "bCheckForCommandLineOverrides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GraphicsSubSystem_eventSaveAndApplySettings_Parms), &UHT_STATICS::NewProp_bCheckForCommandLineOverrides_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCheckForCommandLineOverrides,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SaveAndApplySettings Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SaveAndApplySettings", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSaveAndApplySettings_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSaveAndApplySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SaveAndApplySettings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSaveAndApplySettings)
{
	P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAndApplySettings(Z_Param_bCheckForCommandLineOverrides);
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SaveAndApplySettings ***************************

// ********** Begin Class UGraphicsSubSystem Function SetFrameRateLimit ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SetFrameRateLimit_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSetFrameRateLimit_Parms
	{
		float FrameRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configura el l\xef\xbf\xbdmite de FPS del juego (0 = Ilimitado). */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configura el l\xef\xbf\xbdmite de FPS del juego (0 = Ilimitado)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetFrameRateLimit constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFrameRateLimit constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFrameRateLimit Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventSetFrameRateLimit_Parms, FrameRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameRate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetFrameRateLimit Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SetFrameRateLimit", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSetFrameRateLimit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSetFrameRateLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SetFrameRateLimit(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSetFrameRateLimit)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FrameRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit(Z_Param_FrameRate);
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SetFrameRateLimit ******************************

// ********** Begin Class UGraphicsSubSystem Function SetOverallGraphicsQuality ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SetOverallGraphicsQuality_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSetOverallGraphicsQuality_Parms
	{
		int32 QualityLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Modifica el nivel de calidad global de Scalability (0 = Low, 1 = Medium, 2 = High, 3 = Epic, 4 = Cinematic).\n\x09 * Aplica a Sombras, Texturas, Anti-Aliasing, Post-Procesado, FX, Iluminaci\xef\xbf\xbdn, etc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifica el nivel de calidad global de Scalability (0 = Low, 1 = Medium, 2 = High, 3 = Epic, 4 = Cinematic).\nAplica a Sombras, Texturas, Anti-Aliasing, Post-Procesado, FX, Iluminaci\xef\xbf\xbdn, etc." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOverallGraphicsQuality constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOverallGraphicsQuality constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOverallGraphicsQuality Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventSetOverallGraphicsQuality_Parms, QualityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QualityLevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOverallGraphicsQuality Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SetOverallGraphicsQuality", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSetOverallGraphicsQuality_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSetOverallGraphicsQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SetOverallGraphicsQuality(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSetOverallGraphicsQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_QualityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverallGraphicsQuality(Z_Param_QualityLevel);
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SetOverallGraphicsQuality **********************

// ********** Begin Class UGraphicsSubSystem Function SetResolutionScale ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SetResolutionScale_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSetResolutionScale_Parms
	{
		float ScalePercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configura la escala de renderizado (View Distance / Rendering Scale) de 10% a 100%. */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configura la escala de renderizado (View Distance / Rendering Scale) de 10% a 100%." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetResolutionScale constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalePercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetResolutionScale constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetResolutionScale Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ScalePercentage = { "ScalePercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventSetResolutionScale_Parms, ScalePercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ScalePercentage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetResolutionScale Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SetResolutionScale", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSetResolutionScale_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSetResolutionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SetResolutionScale(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSetResolutionScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScalePercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResolutionScale(Z_Param_ScalePercentage);
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SetResolutionScale *****************************

// ********** Begin Class UGraphicsSubSystem Function SetScreenResolution **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SetScreenResolution_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSetScreenResolution_Parms
	{
		FIntPoint Resolution;
		TEnumAsByte<EWindowMode::Type> WindowMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Aplica una nueva resoluci\xef\xbf\xbdn de pantalla y el modo de ventana especificado. */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aplica una nueva resoluci\xef\xbf\xbdn de pantalla y el modo de ventana especificado." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetScreenResolution constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetScreenResolution constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetScreenResolution Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventSetScreenResolution_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WindowMode = { "WindowMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventSetScreenResolution_Parms, WindowMode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(0, nullptr) }; // d1c2e2851758b2a9faa327699c3cee9805e99706
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WindowMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetScreenResolution Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SetScreenResolution", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSetScreenResolution_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSetScreenResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SetScreenResolution(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSetScreenResolution)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Resolution);
	P_GET_PROPERTY(FByteProperty,Z_Param_WindowMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScreenResolution(Z_Param_Resolution,EWindowMode::Type(Z_Param_WindowMode));
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SetScreenResolution ****************************

// ********** Begin Class UGraphicsSubSystem Function SetShadowQuality *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SetShadowQuality_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSetShadowQuality_Parms
	{
		int32 QualityLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configura la calidad de sombras de forma individual. */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configura la calidad de sombras de forma individual." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetShadowQuality constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetShadowQuality constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetShadowQuality Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventSetShadowQuality_Parms, QualityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QualityLevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetShadowQuality Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SetShadowQuality", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSetShadowQuality_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSetShadowQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SetShadowQuality(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSetShadowQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_QualityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowQuality(Z_Param_QualityLevel);
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SetShadowQuality *******************************

// ********** Begin Class UGraphicsSubSystem Function SetTextureQuality ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SetTextureQuality_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSetTextureQuality_Parms
	{
		int32 QualityLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Scalability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configura la calidad de texturas de forma individual. */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configura la calidad de texturas de forma individual." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTextureQuality constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTextureQuality constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTextureQuality Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(GraphicsSubSystem_eventSetTextureQuality_Parms, QualityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_QualityLevel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTextureQuality Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SetTextureQuality", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSetTextureQuality_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSetTextureQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SetTextureQuality(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSetTextureQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_QualityLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureQuality(Z_Param_QualityLevel);
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SetTextureQuality ******************************

// ********** Begin Class UGraphicsSubSystem Function SetVSyncEnabled ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGraphicsSubSystem_SetVSyncEnabled_Statics
struct UHT_STATICS
{
	struct GraphicsSubSystem_eventSetVSyncEnabled_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Graphics|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configura la sincronizaci\xef\xbf\xbdn vertical (VSync). */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configura la sincronizaci\xef\xbf\xbdn vertical (VSync)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetVSyncEnabled constinit property declarations ***********************
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((GraphicsSubSystem_eventSetVSyncEnabled_Parms*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVSyncEnabled constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVSyncEnabled Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GraphicsSubSystem_eventSetVSyncEnabled_Parms), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetVSyncEnabled Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGraphicsSubSystem, nullptr, "SetVSyncEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GraphicsSubSystem_eventSetVSyncEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GraphicsSubSystem_eventSetVSyncEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_SetVSyncEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGraphicsSubSystem::execSetVSyncEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVSyncEnabled(Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class UGraphicsSubSystem Function SetVSyncEnabled ********************************

// ********** Begin Class UGraphicsSubSystem *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UGraphicsSubSystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GraphicsSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGraphicsSubSystem constinit property declarations ***********************
// ********** End Class UGraphicsSubSystem constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetOverallGraphicsQuality"), .Pointer = &UGraphicsSubSystem::execGetOverallGraphicsQuality },
		{ .NameUTF8 = UTF8TEXT("GetScreenResolution"), .Pointer = &UGraphicsSubSystem::execGetScreenResolution },
		{ .NameUTF8 = UTF8TEXT("GetSupportedScreenResolutions"), .Pointer = &UGraphicsSubSystem::execGetSupportedScreenResolutions },
		{ .NameUTF8 = UTF8TEXT("RunHardwareBenchmark"), .Pointer = &UGraphicsSubSystem::execRunHardwareBenchmark },
		{ .NameUTF8 = UTF8TEXT("SaveAndApplySettings"), .Pointer = &UGraphicsSubSystem::execSaveAndApplySettings },
		{ .NameUTF8 = UTF8TEXT("SetFrameRateLimit"), .Pointer = &UGraphicsSubSystem::execSetFrameRateLimit },
		{ .NameUTF8 = UTF8TEXT("SetOverallGraphicsQuality"), .Pointer = &UGraphicsSubSystem::execSetOverallGraphicsQuality },
		{ .NameUTF8 = UTF8TEXT("SetResolutionScale"), .Pointer = &UGraphicsSubSystem::execSetResolutionScale },
		{ .NameUTF8 = UTF8TEXT("SetScreenResolution"), .Pointer = &UGraphicsSubSystem::execSetScreenResolution },
		{ .NameUTF8 = UTF8TEXT("SetShadowQuality"), .Pointer = &UGraphicsSubSystem::execSetShadowQuality },
		{ .NameUTF8 = UTF8TEXT("SetTextureQuality"), .Pointer = &UGraphicsSubSystem::execSetTextureQuality },
		{ .NameUTF8 = UTF8TEXT("SetVSyncEnabled"), .Pointer = &UGraphicsSubSystem::execSetVSyncEnabled },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGraphicsSubSystem_GetOverallGraphicsQuality, "GetOverallGraphicsQuality" }, // 1917c7ef94b6a8076f071dc3d6ea376976c26463
		{ &Z_Construct_UFunction_UGraphicsSubSystem_GetScreenResolution, "GetScreenResolution" }, // 32f276657e30e446fc55c342c66970603f1a1638
		{ &Z_Construct_UFunction_UGraphicsSubSystem_GetSupportedScreenResolutions, "GetSupportedScreenResolutions" }, // 7d7e155d6eeb22f1be122724e8780130d58634cd
		{ &Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize, "ReceiveDeinitialize" }, // db73067a6a88728f39464e70234fbf20a792db39
		{ &Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize, "ReceiveInitialize" }, // 73cff27f798f878999aba02433aeaff65991be86
		{ &Z_Construct_UFunction_UGraphicsSubSystem_RunHardwareBenchmark, "RunHardwareBenchmark" }, // f8b42f13de701c827e48c5305a4111b0e7801cc0
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SaveAndApplySettings, "SaveAndApplySettings" }, // 772508572da950f6cb5924638eb12953da4b94b9
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SetFrameRateLimit, "SetFrameRateLimit" }, // 1720f52e6a52c81683ce4160dd515e338e88c7da
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SetOverallGraphicsQuality, "SetOverallGraphicsQuality" }, // 4e1a0a13efb90371eace8b835ed395016f5c0b46
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SetResolutionScale, "SetResolutionScale" }, // d1f33b89b2ba7a99d2aa8ff7f2234ae842626884
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SetScreenResolution, "SetScreenResolution" }, // a6daf711b9fb0cebd65c62509195ec672385db0f
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SetShadowQuality, "SetShadowQuality" }, // 7f9a843ed8dba2f54f5b052fd9c8fc885809a93a
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SetTextureQuality, "SetTextureQuality" }, // d464cfe22081260790cab346881ef7effbe9474f
		{ &Z_Construct_UFunction_UGraphicsSubSystem_SetVSyncEnabled, "SetVSyncEnabled" }, // c8340a76780a747741aef1699dbc1a9c41c2c72f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphicsSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SubSystems,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UGraphicsSubSystem,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UGraphicsSubSystem_StaticRegisterNativesUGraphicsSubSystem()
{
	UClass* Class = UGraphicsSubSystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGraphicsSubSystem;
UClass* Z_Construct_UClass_UGraphicsSubSystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UGraphicsSubSystem;
		if (!Z_Registration_Info_UClass_UGraphicsSubSystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("GraphicsSubSystem"),
				Z_Registration_Info_UClass_UGraphicsSubSystem.InnerSingleton,
				UGraphicsSubSystem_StaticRegisterNativesUGraphicsSubSystem,
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
		return Z_Registration_Info_UClass_UGraphicsSubSystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UGraphicsSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphicsSubSystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphicsSubSystem.OuterSingleton;
}
#undef UHT_STATICS
UGraphicsSubSystem::UGraphicsSubSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGraphicsSubSystem);
UGraphicsSubSystem::~UGraphicsSubSystem() {}
// ********** End Class UGraphicsSubSystem *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h__Script_SubSystems_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSupportedResolution, Z_Construct_UScriptStruct_FSupportedResolution_Statics::NewStructOps, TEXT("SupportedResolution"),&Z_Registration_Info_UScriptStruct_FSupportedResolution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSupportedResolution), 3339368732U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphicsSubSystem, TEXT("UGraphicsSubSystem"), &Z_Registration_Info_UClass_UGraphicsSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphicsSubSystem), 442307602U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_GraphicsSubSystem_h__Script_SubSystems_7b396c2ffd275f6998539d7df486a4adc3f69aee{
	TEXT("/Script/SubSystems"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
