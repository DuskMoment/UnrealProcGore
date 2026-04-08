// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSocketData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GORE_API UClass* Z_Construct_UClass_USocketData();
GORE_API UClass* Z_Construct_UClass_USocketData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface USocketData **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USocketData;
UClass* USocketData::GetPrivateStaticClass()
{
	using TClass = USocketData;
	if (!Z_Registration_Info_UClass_USocketData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SocketData"),
			Z_Registration_Info_UClass_USocketData.InnerSingleton,
			StaticRegisterNativesUSocketData,
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
	return Z_Registration_Info_UClass_USocketData.InnerSingleton;
}
UClass* Z_Construct_UClass_USocketData_NoRegister()
{
	return USocketData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USocketData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface USocketData constinit property declarations **************************
// ********** End Interface USocketData constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISocketData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USocketData_Statics
UObject* (*const Z_Construct_UClass_USocketData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocketData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocketData_Statics::ClassParams = {
	&USocketData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocketData_Statics::Class_MetaDataParams), Z_Construct_UClass_USocketData_Statics::Class_MetaDataParams)
};
void USocketData::StaticRegisterNativesUSocketData()
{
}
UClass* Z_Construct_UClass_USocketData()
{
	if (!Z_Registration_Info_UClass_USocketData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocketData.OuterSingleton, Z_Construct_UClass_USocketData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocketData.OuterSingleton;
}
USocketData::USocketData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USocketData);
// ********** End Interface USocketData ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocketData, USocketData::StaticClass, TEXT("USocketData"), &Z_Registration_Info_UClass_USocketData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocketData), 1298747648U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h__Script_Gore_2320931957{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
