// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoreCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGoreCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
GORE_API UClass* Z_Construct_UClass_AGoreCameraManager();
GORE_API UClass* Z_Construct_UClass_AGoreCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGoreCameraManager *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGoreCameraManager;
UClass* AGoreCameraManager::GetPrivateStaticClass()
{
	using TClass = AGoreCameraManager;
	if (!Z_Registration_Info_UClass_AGoreCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GoreCameraManager"),
			Z_Registration_Info_UClass_AGoreCameraManager.InnerSingleton,
			StaticRegisterNativesAGoreCameraManager,
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
	return Z_Registration_Info_UClass_AGoreCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGoreCameraManager_NoRegister()
{
	return AGoreCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGoreCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "GoreCameraManager.h" },
		{ "ModuleRelativePath", "GoreCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGoreCameraManager constinit property declarations ***********************
// ********** End Class AGoreCameraManager constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoreCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGoreCameraManager_Statics
UObject* (*const Z_Construct_UClass_AGoreCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoreCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoreCameraManager_Statics::ClassParams = {
	&AGoreCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoreCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoreCameraManager_Statics::Class_MetaDataParams)
};
void AGoreCameraManager::StaticRegisterNativesAGoreCameraManager()
{
}
UClass* Z_Construct_UClass_AGoreCameraManager()
{
	if (!Z_Registration_Info_UClass_AGoreCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoreCameraManager.OuterSingleton, Z_Construct_UClass_AGoreCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoreCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGoreCameraManager);
AGoreCameraManager::~AGoreCameraManager() {}
// ********** End Class AGoreCameraManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCameraManager_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoreCameraManager, AGoreCameraManager::StaticClass, TEXT("AGoreCameraManager"), &Z_Registration_Info_UClass_AGoreCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoreCameraManager), 562721299U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCameraManager_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCameraManager_h__Script_Gore_3316264039{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCameraManager_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCameraManager_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
