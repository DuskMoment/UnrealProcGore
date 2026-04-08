// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoreBoneData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGoreBoneData() {}

// ********** Begin Cross Module References ********************************************************
GORE_API UScriptStruct* Z_Construct_UScriptStruct_FGoreBoneData();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGoreBoneData *****************************************************
struct Z_Construct_UScriptStruct_FGoreBoneData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGoreBoneData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGoreBoneData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GoreBoneData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGoreBoneData constinit property declarations *********************
// ********** End ScriptStruct FGoreBoneData constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoreBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGoreBoneData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGoreBoneData;
class UScriptStruct* FGoreBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGoreBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGoreBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoreBoneData, (UObject*)Z_Construct_UPackage__Script_Gore(), TEXT("GoreBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_FGoreBoneData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoreBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
	nullptr,
	&NewStructOps,
	"GoreBoneData",
	nullptr,
	0,
	sizeof(FGoreBoneData),
	alignof(FGoreBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoreBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGoreBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGoreBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_FGoreBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGoreBoneData.InnerSingleton, Z_Construct_UScriptStruct_FGoreBoneData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGoreBoneData.InnerSingleton);
}
// ********** End ScriptStruct FGoreBoneData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_GoreBoneData_h__Script_Gore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGoreBoneData::StaticStruct, Z_Construct_UScriptStruct_FGoreBoneData_Statics::NewStructOps, TEXT("GoreBoneData"),&Z_Registration_Info_UScriptStruct_FGoreBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoreBoneData), 2193636657U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_GoreBoneData_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_GoreBoneData_h__Script_Gore_3350956583{
	TEXT("/Script/Gore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_GoreBoneData_h__Script_Gore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_GoreBoneData_h__Script_Gore_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
