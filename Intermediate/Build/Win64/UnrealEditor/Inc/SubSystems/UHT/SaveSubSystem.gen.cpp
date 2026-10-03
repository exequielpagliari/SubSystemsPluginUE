// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveSubSystem.h"
#include "Engine/GameInstance.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSaveSubSystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USaveGame(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_SubSystems(ETypeConstructPhase);
SUBSYSTEMS_API UFunction* Z_Construct_UDelegateFunction_SubSystems_OnLoadGameCompleted__DelegateSignature(ETypeConstructPhase);
SUBSYSTEMS_API UFunction* Z_Construct_UDelegateFunction_SubSystems_OnSaveGameCompleted__DelegateSignature(ETypeConstructPhase);
SUBSYSTEMS_API UClass* Z_Construct_UClass_USaveSubSystem(ETypeConstructPhase);
SUBSYSTEMS_API UClass* Z_Construct_UClass_USaveSubSystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnSaveGameCompleted **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_SubSystems_OnSaveGameCompleted__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_SubSystems_eventOnSaveGameCompleted_Parms
	{
		bool bSuccess;
		FString SlotName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSaveGameCompleted constinit property declarations ******************
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_SubSystems_eventOnSaveGameCompleted_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSaveGameCompleted constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSaveGameCompleted Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SubSystems_eventOnSaveGameCompleted_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SubSystems_eventOnSaveGameCompleted_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSaveGameCompleted Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_SubSystems, nullptr, "OnSaveGameCompleted__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_SubSystems_eventOnSaveGameCompleted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_SubSystems_eventOnSaveGameCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SubSystems_OnSaveGameCompleted__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSaveGameCompleted ****************************************************

// ********** Begin Delegate FOnLoadGameCompleted **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_SubSystems_OnLoadGameCompleted__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_SubSystems_eventOnLoadGameCompleted_Parms
	{
		USaveGame* SaveGameLoaded;
		FString SlotName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLoadGameCompleted constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameLoaded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLoadGameCompleted constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLoadGameCompleted Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SaveGameLoaded = { "SaveGameLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SubSystems_eventOnLoadGameCompleted_Parms, SaveGameLoaded), Z_Construct_UClass_USaveGame, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SubSystems_eventOnLoadGameCompleted_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SaveGameLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnLoadGameCompleted Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_SubSystems, nullptr, "OnLoadGameCompleted__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_SubSystems_eventOnLoadGameCompleted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_SubSystems_eventOnLoadGameCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SubSystems_OnLoadGameCompleted__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnLoadGameCompleted ****************************************************

// ********** Begin Class USaveSubSystem Function DeleteSaveGameSlot *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_DeleteSaveGameSlot_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventDeleteSaveGameSlot_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Elimina de disco el slot de guardado especificado. */" },
#endif
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Elimina de disco el slot de guardado especificado." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSaveGameSlot constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveSubSystem_eventDeleteSaveGameSlot_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteSaveGameSlot constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteSaveGameSlot Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventDeleteSaveGameSlot_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventDeleteSaveGameSlot_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSubSystem_eventDeleteSaveGameSlot_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DeleteSaveGameSlot Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "DeleteSaveGameSlot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventDeleteSaveGameSlot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventDeleteSaveGameSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_DeleteSaveGameSlot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execDeleteSaveGameSlot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteSaveGameSlot(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function DeleteSaveGameSlot *********************************

// ********** Begin Class USaveSubSystem Function DoesSaveGameExist ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_DoesSaveGameExist_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventDoesSaveGameExist_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Comprueba si existe un archivo de guardado en el slot indicado. */" },
#endif
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comprueba si existe un archivo de guardado en el slot indicado." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesSaveGameExist constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveSubSystem_eventDoesSaveGameExist_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesSaveGameExist constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesSaveGameExist Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventDoesSaveGameExist_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventDoesSaveGameExist_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSubSystem_eventDoesSaveGameExist_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoesSaveGameExist Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "DoesSaveGameExist", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventDoesSaveGameExist_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventDoesSaveGameExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_DoesSaveGameExist(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execDoesSaveGameExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesSaveGameExist(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function DoesSaveGameExist **********************************

// ********** Begin Class USaveSubSystem Function GetCurrentSaveGameObject *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_GetCurrentSaveGameObject_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventGetCurrentSaveGameObject_Parms
	{
		USaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Devuelve la instancia activa en cach\xef\xbf\xbd de la partida cargada actualmente. */" },
#endif
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Devuelve la instancia activa en cach\xef\xbf\xbd de la partida cargada actualmente." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentSaveGameObject constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentSaveGameObject constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentSaveGameObject Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventGetCurrentSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_USaveGame, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentSaveGameObject Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "GetCurrentSaveGameObject", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventGetCurrentSaveGameObject_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventGetCurrentSaveGameObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_GetCurrentSaveGameObject(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execGetCurrentSaveGameObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveGame**)Z_Param__Result=P_THIS->GetCurrentSaveGameObject();
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function GetCurrentSaveGameObject ***************************

// ********** Begin Class USaveSubSystem Function GetOrCreateSaveGameObject ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_GetOrCreateSaveGameObject_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventGetOrCreateSaveGameObject_Parms
	{
		TSubclassOf<USaveGame> SaveGameClass;
		USaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Obtiene o crea un objeto USaveGame en memoria para modificar antes de guardar en disco. */" },
#endif
		{ "DeterminesOutputType", "SaveGameClass" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obtiene o crea un objeto USaveGame en memoria para modificar antes de guardar en disco." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOrCreateSaveGameObject constinit property declarations *************
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOrCreateSaveGameObject constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOrCreateSaveGameObject Property Definitions ************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventGetOrCreateSaveGameObject_Parms, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USaveGame, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventGetOrCreateSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_USaveGame, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOrCreateSaveGameObject Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "GetOrCreateSaveGameObject", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventGetOrCreateSaveGameObject_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventGetOrCreateSaveGameObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_GetOrCreateSaveGameObject(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execGetOrCreateSaveGameObject)
{
	P_GET_OBJECT(UClass,Z_Param_SaveGameClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveGame**)Z_Param__Result=P_THIS->GetOrCreateSaveGameObject(Z_Param_SaveGameClass);
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function GetOrCreateSaveGameObject **************************

// ********** Begin Class USaveSubSystem Function LoadGameFromSlotAsync ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_LoadGameFromSlotAsync_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventLoadGameFromSlotAsync_Parms
	{
		FString SlotName;
		int32 UserIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Carga as\xef\xbf\xbdncronamente desde disco en segundo plano. */" },
#endif
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Carga as\xef\xbf\xbdncronamente desde disco en segundo plano." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadGameFromSlotAsync constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadGameFromSlotAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadGameFromSlotAsync Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventLoadGameFromSlotAsync_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventLoadGameFromSlotAsync_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadGameFromSlotAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "LoadGameFromSlotAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventLoadGameFromSlotAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventLoadGameFromSlotAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_LoadGameFromSlotAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execLoadGameFromSlotAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGameFromSlotAsync(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function LoadGameFromSlotAsync ******************************

// ********** Begin Class USaveSubSystem Function LoadGameFromSlotSync *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_LoadGameFromSlotSync_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventLoadGameFromSlotSync_Parms
	{
		FString SlotName;
		int32 UserIndex;
		USaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Carga s\xef\xbf\xbdncronamente un SaveGame desde disco. */" },
#endif
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Carga s\xef\xbf\xbdncronamente un SaveGame desde disco." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadGameFromSlotSync constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadGameFromSlotSync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadGameFromSlotSync Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventLoadGameFromSlotSync_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventLoadGameFromSlotSync_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventLoadGameFromSlotSync_Parms, ReturnValue), Z_Construct_UClass_USaveGame, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadGameFromSlotSync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "LoadGameFromSlotSync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventLoadGameFromSlotSync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventLoadGameFromSlotSync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_LoadGameFromSlotSync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execLoadGameFromSlotSync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USaveGame**)Z_Param__Result=P_THIS->LoadGameFromSlotSync(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function LoadGameFromSlotSync *******************************

// ********** Begin Class USaveSubSystem Function ReceiveDeinitialize ******************************
static FName NAME_USaveSubSystem_ReceiveDeinitialize = FName(TEXT("ReceiveDeinitialize"));
void USaveSubSystem::ReceiveDeinitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_USaveSubSystem_ReceiveDeinitialize);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Deinitialize" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveDeinitialize constinit property declarations *******************
// ********** End Function ReceiveDeinitialize constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "ReceiveDeinitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class USaveSubSystem Function ReceiveDeinitialize ********************************

// ********** Begin Class USaveSubSystem Function ReceiveInitialize ********************************
static FName NAME_USaveSubSystem_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
void USaveSubSystem::ReceiveInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_USaveSubSystem_ReceiveInitialize);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End USubsystem\n" },
#endif
		{ "DisplayName", "On Initialize" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End USubsystem" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReceiveInitialize constinit property declarations *********************
// ********** End Function ReceiveInitialize constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "ReceiveInitialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class USaveSubSystem Function ReceiveInitialize **********************************

// ********** Begin Class USaveSubSystem Function SaveGameToSlotAsync ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_SaveGameToSlotAsync_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventSaveGameToSlotAsync_Parms
	{
		USaveGame* SaveGameObject;
		FString SlotName;
		int32 UserIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Guarda as\xef\xbf\xbdncronamente en segundo plano sin congelar el hilo de render. */" },
#endif
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guarda as\xef\xbf\xbdncronamente en segundo plano sin congelar el hilo de render." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveGameToSlotAsync constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveGameToSlotAsync constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveGameToSlotAsync Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventSaveGameToSlotAsync_Parms, SaveGameObject), Z_Construct_UClass_USaveGame, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventSaveGameToSlotAsync_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventSaveGameToSlotAsync_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SaveGameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SaveGameToSlotAsync Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "SaveGameToSlotAsync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventSaveGameToSlotAsync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventSaveGameToSlotAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_SaveGameToSlotAsync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execSaveGameToSlotAsync)
{
	P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGameToSlotAsync(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function SaveGameToSlotAsync ********************************

// ********** Begin Class USaveSubSystem Function SaveGameToSlotSync *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USaveSubSystem_SaveGameToSlotSync_Statics
struct UHT_STATICS
{
	struct SaveSubSystem_eventSaveGameToSlotSync_Parms
	{
		USaveGame* SaveGameObject;
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "SaveSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Guarda s\xef\xbf\xbdncronamente el objeto SaveGame en el slot especificado. */" },
#endif
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guarda s\xef\xbf\xbdncronamente el objeto SaveGame en el slot especificado." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveGameToSlotSync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveSubSystem_eventSaveGameToSlotSync_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveGameToSlotSync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveGameToSlotSync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventSaveGameToSlotSync_Parms, SaveGameObject), Z_Construct_UClass_USaveGame, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventSaveGameToSlotSync_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSubSystem_eventSaveGameToSlotSync_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveSubSystem_eventSaveGameToSlotSync_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SaveGameObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SaveGameToSlotSync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USaveSubSystem, nullptr, "SaveGameToSlotSync", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SaveSubSystem_eventSaveGameToSlotSync_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SaveSubSystem_eventSaveGameToSlotSync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSubSystem_SaveGameToSlotSync(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USaveSubSystem::execSaveGameToSlotSync)
{
	P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveGameToSlotSync(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class USaveSubSystem Function SaveGameToSlotSync *********************************

// ********** Begin Class USaveSubSystem ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USaveSubSystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveCompleted_MetaData[] = {
		{ "Category", "SaveSystem|Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Delegates de Notificaci\xef\xbf\xbdn As\xef\xbf\xbdncrona ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Delegates de Notificaci\xef\xbf\xbdn As\xef\xbf\xbdncrona ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[] = {
		{ "Category", "SaveSystem|Delegates" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveGame_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Instancia en memoria de la partida cargada/creada actualmente. */" },
#endif
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instancia en memoria de la partida cargada/creada actualmente." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USaveSubSystem constinit property declarations ***************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USaveSubSystem constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeleteSaveGameSlot"), .Pointer = &USaveSubSystem::execDeleteSaveGameSlot },
		{ .NameUTF8 = UTF8TEXT("DoesSaveGameExist"), .Pointer = &USaveSubSystem::execDoesSaveGameExist },
		{ .NameUTF8 = UTF8TEXT("GetCurrentSaveGameObject"), .Pointer = &USaveSubSystem::execGetCurrentSaveGameObject },
		{ .NameUTF8 = UTF8TEXT("GetOrCreateSaveGameObject"), .Pointer = &USaveSubSystem::execGetOrCreateSaveGameObject },
		{ .NameUTF8 = UTF8TEXT("LoadGameFromSlotAsync"), .Pointer = &USaveSubSystem::execLoadGameFromSlotAsync },
		{ .NameUTF8 = UTF8TEXT("LoadGameFromSlotSync"), .Pointer = &USaveSubSystem::execLoadGameFromSlotSync },
		{ .NameUTF8 = UTF8TEXT("SaveGameToSlotAsync"), .Pointer = &USaveSubSystem::execSaveGameToSlotAsync },
		{ .NameUTF8 = UTF8TEXT("SaveGameToSlotSync"), .Pointer = &USaveSubSystem::execSaveGameToSlotSync },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveSubSystem_DeleteSaveGameSlot, "DeleteSaveGameSlot" }, // 4986f30f80b6ebced262520b642a62343e498038
		{ &Z_Construct_UFunction_USaveSubSystem_DoesSaveGameExist, "DoesSaveGameExist" }, // 1f25e433400116565f21e8bcdf032a773a4c2eff
		{ &Z_Construct_UFunction_USaveSubSystem_GetCurrentSaveGameObject, "GetCurrentSaveGameObject" }, // 06143bd7526e67d38ada9761acb113e0f06b1c7a
		{ &Z_Construct_UFunction_USaveSubSystem_GetOrCreateSaveGameObject, "GetOrCreateSaveGameObject" }, // 8eef31f57d097998a210ad16b5420c875eba2159
		{ &Z_Construct_UFunction_USaveSubSystem_LoadGameFromSlotAsync, "LoadGameFromSlotAsync" }, // 771606147e51f09c375ac272b03c382d8d5093f0
		{ &Z_Construct_UFunction_USaveSubSystem_LoadGameFromSlotSync, "LoadGameFromSlotSync" }, // cf37f70ddd745e91dcdb35afd613ec9b429cc9e4
		{ &Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize, "ReceiveDeinitialize" }, // 90a39bf365a359fba2e202497ebc71e309ad47d0
		{ &Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize, "ReceiveInitialize" }, // 0ef905062c9211e00ed5d38013d5f5638f27a3a5
		{ &Z_Construct_UFunction_USaveSubSystem_SaveGameToSlotAsync, "SaveGameToSlotAsync" }, // 6152d86b9563bdf0dd58814a09c27dfd5e1a8a6d
		{ &Z_Construct_UFunction_USaveSubSystem_SaveGameToSlotSync, "SaveGameToSlotSync" }, // 05109dc4e47669ba259eeaf436930b79c059b879
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USaveSubSystem Property Definitions **************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSaveCompleted = { "OnSaveCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSubSystem, OnSaveCompleted), Z_Construct_UDelegateFunction_SubSystems_OnSaveGameCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveCompleted_MetaData), NewProp_OnSaveCompleted_MetaData) }; // ecd93e8cc3cf058ec23bbff5aee227a7a15fb750
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnLoadCompleted = { "OnLoadCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSubSystem, OnLoadCompleted), Z_Construct_UDelegateFunction_SubSystems_OnLoadGameCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadCompleted_MetaData), NewProp_OnLoadCompleted_MetaData) }; // a8a43e89f0f3375dfc520efac475e339852c2916
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentSaveGame = { "CurrentSaveGame", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSubSystem, CurrentSaveGame), Z_Construct_UClass_USaveGame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveGame_MetaData), NewProp_CurrentSaveGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSaveCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnLoadCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentSaveGame,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USaveSubSystem Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UGameInstanceSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SubSystems,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USaveSubSystem,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void USaveSubSystem_StaticRegisterNativesUSaveSubSystem()
{
	UClass* Class = USaveSubSystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USaveSubSystem;
UClass* Z_Construct_UClass_USaveSubSystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USaveSubSystem;
		if (!Z_Registration_Info_UClass_USaveSubSystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SaveSubSystem"),
				Z_Registration_Info_UClass_USaveSubSystem.InnerSingleton,
				USaveSubSystem_StaticRegisterNativesUSaveSubSystem,
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
		return Z_Registration_Info_UClass_USaveSubSystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USaveSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSubSystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSubSystem.OuterSingleton;
}
#undef UHT_STATICS
USaveSubSystem::USaveSubSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USaveSubSystem);
USaveSubSystem::~USaveSubSystem() {}
// ********** End Class USaveSubSystem *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h__Script_SubSystems_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSubSystem, TEXT("USaveSubSystem"), &Z_Registration_Info_UClass_USaveSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSubSystem), 98973938U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_01_ACTIVO_Plugin58_Plugins_SubSystemsPluginUE_Source_SubSystems_Public_SaveSubSystem_h__Script_SubSystems_28eb6624c2777307bcd136898cf4b8a16f3178b7{
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
