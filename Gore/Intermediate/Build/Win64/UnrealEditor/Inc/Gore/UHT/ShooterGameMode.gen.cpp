// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeShooterGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GORE_API UClass* Z_Construct_UClass_AShooterGameMode();
GORE_API UClass* Z_Construct_UClass_AShooterGameMode_NoRegister();
GORE_API UClass* Z_Construct_UClass_UShooterUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterGameMode *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterGameMode;
UClass* AShooterGameMode::GetPrivateStaticClass()
{
	using TClass = AShooterGameMode;
	if (!Z_Registration_Info_UClass_AShooterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ShooterGameMode"),
			Z_Registration_Info_UClass_AShooterGameMode.InnerSingleton,
			StaticRegisterNativesAShooterGameMode,
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
	return Z_Registration_Info_UClass_AShooterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterGameMode_NoRegister()
{
	return AShooterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person shooter game\n *  Manages game UI\n *  Keeps track of team scores\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_Shooter/ShooterGameMode.h" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person shooter game\nManages game UI\nKeeps track of team scores" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShooterUIClass_MetaData[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of UI widget to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of UI widget to spawn" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AShooterGameMode constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShooterUIClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AShooterGameMode constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AShooterGameMode_Statics

// ********** Begin Class AShooterGameMode Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterGameMode_Statics::NewProp_ShooterUIClass = { "ShooterUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGameMode, ShooterUIClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UShooterUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShooterUIClass_MetaData), NewProp_ShooterUIClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameMode_Statics::NewProp_ShooterUIClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::PropPointers) < 2048);
// ********** End Class AShooterGameMode Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameMode_Statics::ClassParams = {
	&AShooterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::PropPointers),
	0,
	0x009002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterGameMode_Statics::Class_MetaDataParams)
};
void AShooterGameMode::StaticRegisterNativesAShooterGameMode()
{
}
UClass* Z_Construct_UClass_AShooterGameMode()
{
	if (!Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton, Z_Construct_UClass_AShooterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterGameMode.OuterSingleton;
}
AShooterGameMode::AShooterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AShooterGameMode);
AShooterGameMode::~AShooterGameMode() {}
// ********** End Class AShooterGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterGameMode_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameMode, AShooterGameMode::StaticClass, TEXT("AShooterGameMode"), &Z_Registration_Info_UClass_AShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameMode), 3481333636U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterGameMode_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterGameMode_h__Script_Gore_1008607010{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterGameMode_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterGameMode_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
