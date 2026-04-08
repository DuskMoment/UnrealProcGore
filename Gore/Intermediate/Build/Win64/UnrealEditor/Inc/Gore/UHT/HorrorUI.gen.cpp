// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHorrorUI() {}

// ********** Begin Cross Module References ********************************************************
GORE_API UClass* Z_Construct_UClass_UHorrorUI();
GORE_API UClass* Z_Construct_UClass_UHorrorUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Gore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHorrorUI Function BP_SprintMeterUpdated *********************************
struct HorrorUI_eventBP_SprintMeterUpdated_Parms
{
	float Percent;
};
static FName NAME_UHorrorUI_BP_SprintMeterUpdated = FName(TEXT("BP_SprintMeterUpdated"));
void UHorrorUI::BP_SprintMeterUpdated(float Percent)
{
	HorrorUI_eventBP_SprintMeterUpdated_Parms Parms;
	Parms.Percent=Percent;
	UFunction* Func = FindFunctionChecked(NAME_UHorrorUI_BP_SprintMeterUpdated);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horror" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Passes control to Blueprint to update the sprint meter widgets */" },
#endif
		{ "DisplayName", "Sprint Meter Updated" },
		{ "ModuleRelativePath", "Variant_Horror/UI/HorrorUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Passes control to Blueprint to update the sprint meter widgets" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BP_SprintMeterUpdated constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_SprintMeterUpdated constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_SprintMeterUpdated Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorrorUI_eventBP_SprintMeterUpdated_Parms, Percent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::NewProp_Percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::PropPointers) < 2048);
// ********** End Function BP_SprintMeterUpdated Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorrorUI, nullptr, "BP_SprintMeterUpdated", 	Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::PropPointers), 
sizeof(HorrorUI_eventBP_SprintMeterUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(HorrorUI_eventBP_SprintMeterUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UHorrorUI Function BP_SprintMeterUpdated ***********************************

// ********** Begin Class UHorrorUI Function BP_SprintStateChanged *********************************
struct HorrorUI_eventBP_SprintStateChanged_Parms
{
	bool bSprinting;
};
static FName NAME_UHorrorUI_BP_SprintStateChanged = FName(TEXT("BP_SprintStateChanged"));
void UHorrorUI::BP_SprintStateChanged(bool bSprinting)
{
	HorrorUI_eventBP_SprintStateChanged_Parms Parms;
	Parms.bSprinting=bSprinting ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UHorrorUI_BP_SprintStateChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horror" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Passes control to Blueprint to update the sprint meter status */" },
#endif
		{ "DisplayName", "Sprint State Changed" },
		{ "ModuleRelativePath", "Variant_Horror/UI/HorrorUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Passes control to Blueprint to update the sprint meter status" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BP_SprintStateChanged constinit property declarations *****************
	static void NewProp_bSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_SprintStateChanged constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_SprintStateChanged Property Definitions ****************************
void Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::NewProp_bSprinting_SetBit(void* Obj)
{
	((HorrorUI_eventBP_SprintStateChanged_Parms*)Obj)->bSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorrorUI_eventBP_SprintStateChanged_Parms), &Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::NewProp_bSprinting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::PropPointers) < 2048);
// ********** End Function BP_SprintStateChanged Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorrorUI, nullptr, "BP_SprintStateChanged", 	Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::PropPointers), 
sizeof(HorrorUI_eventBP_SprintStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(HorrorUI_eventBP_SprintStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UHorrorUI Function BP_SprintStateChanged ***********************************

// ********** Begin Class UHorrorUI Function OnSprintMeterUpdated **********************************
struct Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics
{
	struct HorrorUI_eventOnSprintMeterUpdated_Parms
	{
		float Percent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the character's sprint meter is updated */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/UI/HorrorUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the character's sprint meter is updated" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnSprintMeterUpdated constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSprintMeterUpdated constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSprintMeterUpdated Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorrorUI_eventOnSprintMeterUpdated_Parms, Percent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::NewProp_Percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::PropPointers) < 2048);
// ********** End Function OnSprintMeterUpdated Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorrorUI, nullptr, "OnSprintMeterUpdated", 	Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::HorrorUI_eventOnSprintMeterUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::HorrorUI_eventOnSprintMeterUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorrorUI::execOnSprintMeterUpdated)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSprintMeterUpdated(Z_Param_Percent);
	P_NATIVE_END;
}
// ********** End Class UHorrorUI Function OnSprintMeterUpdated ************************************

// ********** Begin Class UHorrorUI Function OnSprintStateChanged **********************************
struct Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics
{
	struct HorrorUI_eventOnSprintStateChanged_Parms
	{
		bool bSprinting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the character's sprint state changes */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/UI/HorrorUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the character's sprint state changes" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnSprintStateChanged constinit property declarations ******************
	static void NewProp_bSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSprintStateChanged constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSprintStateChanged Property Definitions *****************************
void Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::NewProp_bSprinting_SetBit(void* Obj)
{
	((HorrorUI_eventOnSprintStateChanged_Parms*)Obj)->bSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorrorUI_eventOnSprintStateChanged_Parms), &Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::NewProp_bSprinting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::PropPointers) < 2048);
// ********** End Function OnSprintStateChanged Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorrorUI, nullptr, "OnSprintStateChanged", 	Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::HorrorUI_eventOnSprintStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::HorrorUI_eventOnSprintStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorrorUI::execOnSprintStateChanged)
{
	P_GET_UBOOL(Z_Param_bSprinting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSprintStateChanged(Z_Param_bSprinting);
	P_NATIVE_END;
}
// ********** End Class UHorrorUI Function OnSprintStateChanged ************************************

// ********** Begin Class UHorrorUI ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHorrorUI;
UClass* UHorrorUI::GetPrivateStaticClass()
{
	using TClass = UHorrorUI;
	if (!Z_Registration_Info_UClass_UHorrorUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HorrorUI"),
			Z_Registration_Info_UClass_UHorrorUI.InnerSingleton,
			StaticRegisterNativesUHorrorUI,
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
	return Z_Registration_Info_UClass_UHorrorUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UHorrorUI_NoRegister()
{
	return UHorrorUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHorrorUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple UI for a first person horror game\n *  Manages character sprint meter display\n */" },
#endif
		{ "IncludePath", "Variant_Horror/UI/HorrorUI.h" },
		{ "ModuleRelativePath", "Variant_Horror/UI/HorrorUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple UI for a first person horror game\nManages character sprint meter display" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UHorrorUI constinit property declarations ********************************
// ********** End Class UHorrorUI constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnSprintMeterUpdated"), .Pointer = &UHorrorUI::execOnSprintMeterUpdated },
		{ .NameUTF8 = UTF8TEXT("OnSprintStateChanged"), .Pointer = &UHorrorUI::execOnSprintStateChanged },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorrorUI_BP_SprintMeterUpdated, "BP_SprintMeterUpdated" }, // 280876441
		{ &Z_Construct_UFunction_UHorrorUI_BP_SprintStateChanged, "BP_SprintStateChanged" }, // 2159648843
		{ &Z_Construct_UFunction_UHorrorUI_OnSprintMeterUpdated, "OnSprintMeterUpdated" }, // 4026874609
		{ &Z_Construct_UFunction_UHorrorUI_OnSprintStateChanged, "OnSprintStateChanged" }, // 511984589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorrorUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHorrorUI_Statics
UObject* (*const Z_Construct_UClass_UHorrorUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Gore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorrorUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorrorUI_Statics::ClassParams = {
	&UHorrorUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHorrorUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UHorrorUI_Statics::Class_MetaDataParams)
};
void UHorrorUI::StaticRegisterNativesUHorrorUI()
{
	UClass* Class = UHorrorUI::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UHorrorUI_Statics::Funcs));
}
UClass* Z_Construct_UClass_UHorrorUI()
{
	if (!Z_Registration_Info_UClass_UHorrorUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorrorUI.OuterSingleton, Z_Construct_UClass_UHorrorUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHorrorUI.OuterSingleton;
}
UHorrorUI::UHorrorUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHorrorUI);
UHorrorUI::~UHorrorUI() {}
// ********** End Class UHorrorUI ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Horror_UI_HorrorUI_h__Script_Gore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHorrorUI, UHorrorUI::StaticClass, TEXT("UHorrorUI"), &Z_Registration_Info_UClass_UHorrorUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorrorUI), 15579957U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Horror_UI_HorrorUI_h__Script_Gore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Horror_UI_HorrorUI_h__Script_Gore_3626802904{
	TEXT("/Script/Gore"),
	Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Horror_UI_HorrorUI_h__Script_Gore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_Variant_Horror_UI_HorrorUI_h__Script_Gore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
