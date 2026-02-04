// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GORE_API UClass* Z_Construct_UClass_AGoreCharacter();
GORE_API UClass* Z_Construct_UClass_AShooterCharacter();
GORE_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
GORE_API UClass* Z_Construct_UClass_UShooterWeaponHolder_NoRegister();
GORE_API UFunction* Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature();
GORE_API UFunction* Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FBulletCountUpdatedDelegate *******************************************
struct Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics
{
	struct _Script_Gore_eventBulletCountUpdatedDelegate_Parms
	{
		int32 MagazineSize;
		int32 Bullets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FBulletCountUpdatedDelegate constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bullets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FBulletCountUpdatedDelegate constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FBulletCountUpdatedDelegate Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Gore_eventBulletCountUpdatedDelegate_Parms, MagazineSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Gore_eventBulletCountUpdatedDelegate_Parms, Bullets), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_Bullets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FBulletCountUpdatedDelegate Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Gore, nullptr, "BulletCountUpdatedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::_Script_Gore_eventBulletCountUpdatedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::_Script_Gore_eventBulletCountUpdatedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Gore_BulletCountUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBulletCountUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BulletCountUpdatedDelegate, int32 MagazineSize, int32 Bullets)
{
	struct _Script_Gore_eventBulletCountUpdatedDelegate_Parms
	{
		int32 MagazineSize;
		int32 Bullets;
	};
	_Script_Gore_eventBulletCountUpdatedDelegate_Parms Parms;
	Parms.MagazineSize=MagazineSize;
	Parms.Bullets=Bullets;
	BulletCountUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FBulletCountUpdatedDelegate *********************************************

// ********** Begin Delegate FDamagedDelegate ******************************************************
struct Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics
{
	struct _Script_Gore_eventDamagedDelegate_Parms
	{
		float LifePercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FDamagedDelegate constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifePercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FDamagedDelegate constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FDamagedDelegate Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::NewProp_LifePercent = { "LifePercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Gore_eventDamagedDelegate_Parms, LifePercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::NewProp_LifePercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FDamagedDelegate Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Gore, nullptr, "DamagedDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::_Script_Gore_eventDamagedDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::_Script_Gore_eventDamagedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Gore_DamagedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDamagedDelegate_DelegateWrapper(const FMulticastScriptDelegate& DamagedDelegate, float LifePercent)
{
	struct _Script_Gore_eventDamagedDelegate_Parms
	{
		float LifePercent;
	};
	_Script_Gore_eventDamagedDelegate_Parms Parms;
	Parms.LifePercent=LifePercent;
	DamagedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDamagedDelegate ********************************************************

// ********** Begin Class AShooterCharacter Function BP_OnDeath ************************************
static FName NAME_AShooterCharacter_BP_OnDeath = FName(TEXT("BP_OnDeath"));
void AShooterCharacter::BP_OnDeath()
{
	UFunction* Func = FindFunctionChecked(NAME_AShooterCharacter_BP_OnDeath);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AShooterCharacter_BP_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to allow Blueprint code to react to this character's death */" },
#endif
		{ "DisplayName", "On Death" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to allow Blueprint code to react to this character's death" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BP_OnDeath constinit property declarations ****************************
// ********** End Function BP_OnDeath constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_BP_OnDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "BP_OnDeath", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_BP_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_BP_OnDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterCharacter_BP_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_BP_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AShooterCharacter Function BP_OnDeath **************************************

// ********** Begin Class AShooterCharacter Function DoStartFiring *********************************
struct Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles start firing input */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles start firing input" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoStartFiring constinit property declarations *************************
// ********** End Function DoStartFiring constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "DoStartFiring", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterCharacter_DoStartFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execDoStartFiring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoStartFiring();
	P_NATIVE_END;
}
// ********** End Class AShooterCharacter Function DoStartFiring ***********************************

// ********** Begin Class AShooterCharacter Function DoStopFiring **********************************
struct Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles stop firing input */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles stop firing input" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoStopFiring constinit property declarations **************************
// ********** End Function DoStopFiring constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "DoStopFiring", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterCharacter_DoStopFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execDoStopFiring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoStopFiring();
	P_NATIVE_END;
}
// ********** End Class AShooterCharacter Function DoStopFiring ************************************

// ********** Begin Class AShooterCharacter Function DoSwitchWeapon ********************************
struct Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles switch weapon input */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles switch weapon input" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoSwitchWeapon constinit property declarations ************************
// ********** End Function DoSwitchWeapon constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "DoSwitchWeapon", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execDoSwitchWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoSwitchWeapon();
	P_NATIVE_END;
}
// ********** End Class AShooterCharacter Function DoSwitchWeapon **********************************

// ********** Begin Class AShooterCharacter ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterCharacter;
UClass* AShooterCharacter::GetPrivateStaticClass()
{
	using TClass = AShooterCharacter;
	if (!Z_Registration_Info_UClass_AShooterCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ShooterCharacter"),
			Z_Registration_Info_UClass_AShooterCharacter.InnerSingleton,
			StaticRegisterNativesAShooterCharacter,
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
	return Z_Registration_Info_UClass_AShooterCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
{
	return AShooterCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A player controllable first person shooter character\n *  Manages a weapon inventory through the IShooterWeaponHolder interface\n *  Manages health and death\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Variant_Shooter/ShooterCharacter.h" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A player controllable first person shooter character\nManages a weapon inventory through the IShooterWeaponHolder interface\nManages health and death" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnNoiseEmitter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI Noise emitter component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Noise emitter component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire weapon input action */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire weapon input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switch weapon input action */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch weapon input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonWeaponSocket_MetaData[] = {
		{ "Category", "Weapons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the first person mesh weapon socket */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the first person mesh weapon socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonWeaponSocket_MetaData[] = {
		{ "Category", "Weapons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the third person mesh weapon socket */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the third person mesh weapon socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAimDistance_MetaData[] = {
		{ "Category", "Aim" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max distance to use for aim traces */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance to use for aim traces" },
#endif
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max HP this character can have */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max HP this character can have" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamByte_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Team ID for this character*/" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team ID for this character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathTag_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor tag to grant this character when it dies */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor tag to grant this character when it dies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
		{ "Units", "s" },
	};
#endif // WITH_METADATA

// ********** Begin Class AShooterCharacter constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnNoiseEmitter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponAction;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirstPersonWeaponSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThirdPersonWeaponSocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAimDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamByte;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeathTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AShooterCharacter constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DoStartFiring"), .Pointer = &AShooterCharacter::execDoStartFiring },
		{ .NameUTF8 = UTF8TEXT("DoStopFiring"), .Pointer = &AShooterCharacter::execDoStopFiring },
		{ .NameUTF8 = UTF8TEXT("DoSwitchWeapon"), .Pointer = &AShooterCharacter::execDoSwitchWeapon },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_BP_OnDeath, "BP_OnDeath" }, // 3475672115
		{ &Z_Construct_UFunction_AShooterCharacter_DoStartFiring, "DoStartFiring" }, // 204467466
		{ &Z_Construct_UFunction_AShooterCharacter_DoStopFiring, "DoStopFiring" }, // 3534212542
		{ &Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon, "DoSwitchWeapon" }, // 2115138258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AShooterCharacter_Statics

// ********** Begin Class AShooterCharacter Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PawnNoiseEmitter = { "PawnNoiseEmitter", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, PawnNoiseEmitter), Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnNoiseEmitter_MetaData), NewProp_PawnNoiseEmitter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SwitchWeaponAction = { "SwitchWeaponAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, SwitchWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchWeaponAction_MetaData), NewProp_SwitchWeaponAction_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonWeaponSocket = { "FirstPersonWeaponSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FirstPersonWeaponSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonWeaponSocket_MetaData), NewProp_FirstPersonWeaponSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ThirdPersonWeaponSocket = { "ThirdPersonWeaponSocket", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, ThirdPersonWeaponSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonWeaponSocket_MetaData), NewProp_ThirdPersonWeaponSocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxAimDistance = { "MaxAimDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MaxAimDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAimDistance_MetaData), NewProp_MaxAimDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TeamByte = { "TeamByte", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, TeamByte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamByte_MetaData), NewProp_TeamByte_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DeathTag = { "DeathTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, DeathTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathTag_MetaData), NewProp_DeathTag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, RespawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTime_MetaData), NewProp_RespawnTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PawnNoiseEmitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SwitchWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonWeaponSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ThirdPersonWeaponSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxAimDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TeamByte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_DeathTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_RespawnTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers) < 2048);
// ********** End Class AShooterCharacter Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGoreCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShooterCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UShooterWeaponHolder_NoRegister, (int32)VTABLE_OFFSET(AShooterCharacter, IShooterWeaponHolder), false },  // 123152392
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
	&AShooterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams)
};
void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
{
	UClass* Class = AShooterCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AShooterCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AShooterCharacter()
{
	if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AShooterCharacter);
AShooterCharacter::~AShooterCharacter() {}
// ********** End Class AShooterCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterCharacter_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 2844568194U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterCharacter_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterCharacter_h__Script_Gore_3073289913{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterCharacter_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Variant_Shooter_ShooterCharacter_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
