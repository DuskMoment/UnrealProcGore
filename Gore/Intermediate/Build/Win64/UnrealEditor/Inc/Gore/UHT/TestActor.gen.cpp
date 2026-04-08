// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTestActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GORE_API UClass* Z_Construct_UClass_ATestActor();
GORE_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestActor ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATestActor;
UClass* ATestActor::GetPrivateStaticClass()
{
	using TClass = ATestActor;
	if (!Z_Registration_Info_UClass_ATestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestActor"),
			Z_Registration_Info_UClass_ATestActor.InnerSingleton,
			StaticRegisterNativesATestActor,
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
	return Z_Registration_Info_UClass_ATestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestActor_NoRegister()
{
	return ATestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestActor.h" },
		{ "ModuleRelativePath", "Public/TestActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATestActor constinit property declarations *******************************
// ********** End Class ATestActor constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATestActor_Statics
UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
	&ATestActor::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams)
};
void ATestActor::StaticRegisterNativesATestActor()
{
}
UClass* Z_Construct_UClass_ATestActor()
{
	if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATestActor);
ATestActor::~ATestActor() {}
// ********** End Class ATestActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 1052362393U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h__Script_Gore_2666898586{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
