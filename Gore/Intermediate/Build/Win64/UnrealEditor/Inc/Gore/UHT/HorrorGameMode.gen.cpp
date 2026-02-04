// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHorrorGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GORE_API UClass* Z_Construct_UClass_AHorrorGameMode();
GORE_API UClass* Z_Construct_UClass_AHorrorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHorrorGameMode **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHorrorGameMode;
UClass* AHorrorGameMode::GetPrivateStaticClass()
{
	using TClass = AHorrorGameMode;
	if (!Z_Registration_Info_UClass_AHorrorGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HorrorGameMode"),
			Z_Registration_Info_UClass_AHorrorGameMode.InnerSingleton,
			StaticRegisterNativesAHorrorGameMode,
			sizeof(TClass),
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
	return Z_Registration_Info_UClass_AHorrorGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHorrorGameMode_NoRegister()
{
	return AHorrorGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHorrorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person horror game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_Horror/HorrorGameMode.h" },
		{ "ModuleRelativePath", "Variant_Horror/HorrorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person horror game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHorrorGameMode constinit property declarations **************************
// ********** End Class AHorrorGameMode constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHorrorGameMode_Statics
UObject* (*const Z_Construct_UClass_AHorrorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorrorGameMode_Statics::ClassParams = {
	&AHorrorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorrorGameMode_Statics::Class_MetaDataParams)
};
void AHorrorGameMode::StaticRegisterNativesAHorrorGameMode()
{
}
UClass* Z_Construct_UClass_AHorrorGameMode()
{
	if (!Z_Registration_Info_UClass_AHorrorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorrorGameMode.OuterSingleton, Z_Construct_UClass_AHorrorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHorrorGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHorrorGameMode);
AHorrorGameMode::~AHorrorGameMode() {}
// ********** End Class AHorrorGameMode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Horror_HorrorGameMode_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHorrorGameMode, AHorrorGameMode::StaticClass, TEXT("AHorrorGameMode"), &Z_Registration_Info_UClass_AHorrorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorrorGameMode), 582810892U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Horror_HorrorGameMode_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Horror_HorrorGameMode_h__Script_Gore_2471321836{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Horror_HorrorGameMode_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Horror_HorrorGameMode_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
