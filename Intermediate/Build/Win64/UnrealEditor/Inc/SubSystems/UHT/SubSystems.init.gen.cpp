// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubSystems_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	SUBSYSTEMS_API UFunction* Z_Construct_UDelegateFunction_SubSystems_OnLoadGameCompleted__DelegateSignature(ETypeConstructPhase);
	SUBSYSTEMS_API UFunction* Z_Construct_UDelegateFunction_SubSystems_OnSaveGameCompleted__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SubSystems;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SubSystems(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_SubSystems.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_SubSystems_OnLoadGameCompleted__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_SubSystems_OnSaveGameCompleted__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SubSystems",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x78892945,
			0x93B4C068,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SubSystems.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SubSystems.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SubSystems(Z_Construct_UPackage__Script_SubSystems, TEXT("/Script/SubSystems"), Z_Registration_Info_UPackage__Script_SubSystems, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x78892945, 0x93B4C068));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
