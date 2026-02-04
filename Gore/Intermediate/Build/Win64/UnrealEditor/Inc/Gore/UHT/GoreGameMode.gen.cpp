// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoreGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGoreGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GORE_API UClass* Z_Construct_UClass_AGoreGameMode();
GORE_API UClass* Z_Construct_UClass_AGoreGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGoreGameMode ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGoreGameMode;
UClass* AGoreGameMode::GetPrivateStaticClass()
{
	using TClass = AGoreGameMode;
	if (!Z_Registration_Info_UClass_AGoreGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GoreGameMode"),
			Z_Registration_Info_UClass_AGoreGameMode.InnerSingleton,
			StaticRegisterNativesAGoreGameMode,
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
	return Z_Registration_Info_UClass_AGoreGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGoreGameMode_NoRegister()
{
	return AGoreGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGoreGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GoreGameMode.h" },
		{ "ModuleRelativePath", "GoreGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGoreGameMode constinit property declarations ****************************
// ********** End Class AGoreGameMode constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoreGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGoreGameMode_Statics
UObject* (*const Z_Construct_UClass_AGoreGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoreGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoreGameMode_Statics::ClassParams = {
	&AGoreGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoreGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoreGameMode_Statics::Class_MetaDataParams)
};
void AGoreGameMode::StaticRegisterNativesAGoreGameMode()
{
}
UClass* Z_Construct_UClass_AGoreGameMode()
{
	if (!Z_Registration_Info_UClass_AGoreGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoreGameMode.OuterSingleton, Z_Construct_UClass_AGoreGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoreGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGoreGameMode);
AGoreGameMode::~AGoreGameMode() {}
// ********** End Class AGoreGameMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoreGameMode, AGoreGameMode::StaticClass, TEXT("AGoreGameMode"), &Z_Registration_Info_UClass_AGoreGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoreGameMode), 3961935891U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h__Script_Gore_1218094667{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
