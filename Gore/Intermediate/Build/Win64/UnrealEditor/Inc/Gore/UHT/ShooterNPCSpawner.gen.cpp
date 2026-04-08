// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterNPCSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeShooterNPCSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
GORE_API UClass* Z_Construct_UClass_AShooterNPC_NoRegister();
GORE_API UClass* Z_Construct_UClass_AShooterNPCSpawner();
GORE_API UClass* Z_Construct_UClass_AShooterNPCSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterNPCSpawner Function OnNPCDied ************************************
struct Z_Construct_UFunction_AShooterNPCSpawner_OnNPCDied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the spawned NPC has died */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the spawned NPC has died" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnNPCDied constinit property declarations *****************************
// ********** End Function OnNPCDied constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterNPCSpawner_OnNPCDied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterNPCSpawner, nullptr, "OnNPCDied", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterNPCSpawner_OnNPCDied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterNPCSpawner_OnNPCDied_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterNPCSpawner_OnNPCDied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterNPCSpawner_OnNPCDied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterNPCSpawner::execOnNPCDied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNPCDied();
	P_NATIVE_END;
}
// ********** End Class AShooterNPCSpawner Function OnNPCDied **************************************

// ********** Begin Class AShooterNPCSpawner *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterNPCSpawner;
UClass* AShooterNPCSpawner::GetPrivateStaticClass()
{
	using TClass = AShooterNPCSpawner;
	if (!Z_Registration_Info_UClass_AShooterNPCSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ShooterNPCSpawner"),
			Z_Registration_Info_UClass_AShooterNPCSpawner.InnerSingleton,
			StaticRegisterNativesAShooterNPCSpawner,
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
	return Z_Registration_Info_UClass_AShooterNPCSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterNPCSpawner_NoRegister()
{
	return AShooterNPCSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterNPCSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic Actor in charge of spawning Shooter NPCs and monitoring their deaths.\n *  NPCs will be spawned one by one, and the spawner will wait until it dies before spawning a new one.\n */" },
#endif
		{ "IncludePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic Actor in charge of spawning Shooter NPCs and monitoring their deaths.\nNPCs will be spawned one by one, and the spawner will wait until it dies before spawning a new one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCClass_MetaData[] = {
		{ "Category", "NPC Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of NPC to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of NPC to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpawnDelay_MetaData[] = {
		{ "Category", "NPC Spawner" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time to wait before spawning the first NPC on game start */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to wait before spawning the first NPC on game start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "NPC Spawner" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of NPCs to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of NPCs to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "NPC Spawner" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time to wait before spawning the next NPC after the current one dies */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/AI/ShooterNPCSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to wait before spawning the next NPC after the current one dies" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AShooterNPCSpawner constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnDirection;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NPCClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpawnDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AShooterNPCSpawner constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnNPCDied"), .Pointer = &AShooterNPCSpawner::execOnNPCDied },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterNPCSpawner_OnNPCDied, "OnNPCDied" }, // 729999632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterNPCSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AShooterNPCSpawner_Statics

// ********** Begin Class AShooterNPCSpawner Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_SpawnCapsule = { "SpawnCapsule", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPCSpawner, SpawnCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCapsule_MetaData), NewProp_SpawnCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_SpawnDirection = { "SpawnDirection", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPCSpawner, SpawnDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDirection_MetaData), NewProp_SpawnDirection_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_NPCClass = { "NPCClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPCSpawner, NPCClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AShooterNPC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCClass_MetaData), NewProp_NPCClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_InitialSpawnDelay = { "InitialSpawnDelay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPCSpawner, InitialSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSpawnDelay_MetaData), NewProp_InitialSpawnDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPCSpawner, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterNPCSpawner, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterNPCSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_SpawnCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_SpawnDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_NPCClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_InitialSpawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_SpawnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterNPCSpawner_Statics::NewProp_RespawnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPCSpawner_Statics::PropPointers) < 2048);
// ********** End Class AShooterNPCSpawner Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AShooterNPCSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPCSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterNPCSpawner_Statics::ClassParams = {
	&AShooterNPCSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterNPCSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPCSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterNPCSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterNPCSpawner_Statics::Class_MetaDataParams)
};
void AShooterNPCSpawner::StaticRegisterNativesAShooterNPCSpawner()
{
	UClass* Class = AShooterNPCSpawner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AShooterNPCSpawner_Statics::Funcs));
}
UClass* Z_Construct_UClass_AShooterNPCSpawner()
{
	if (!Z_Registration_Info_UClass_AShooterNPCSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterNPCSpawner.OuterSingleton, Z_Construct_UClass_AShooterNPCSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterNPCSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AShooterNPCSpawner);
AShooterNPCSpawner::~AShooterNPCSpawner() {}
// ********** End Class AShooterNPCSpawner *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_AI_ShooterNPCSpawner_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterNPCSpawner, AShooterNPCSpawner::StaticClass, TEXT("AShooterNPCSpawner"), &Z_Registration_Info_UClass_AShooterNPCSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterNPCSpawner), 2461710516U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_AI_ShooterNPCSpawner_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_AI_ShooterNPCSpawner_h__Script_Gore_4279490085{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_AI_ShooterNPCSpawner_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_AI_ShooterNPCSpawner_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
