// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GorePlayerController.h"

#ifdef GORE_GorePlayerController_generated_h
#error "GorePlayerController.generated.h already included, missing '#pragma once' in GorePlayerController.h"
#endif
#define GORE_GorePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGorePlayerController ****************************************************
struct Z_Construct_UClass_AGorePlayerController_Statics;
GORE_API UClass* Z_Construct_UClass_AGorePlayerController_NoRegister();

#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GorePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGorePlayerController(); \
	friend struct ::Z_Construct_UClass_AGorePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GORE_API UClass* ::Z_Construct_UClass_AGorePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AGorePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gore"), Z_Construct_UClass_AGorePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AGorePlayerController)


#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GorePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGorePlayerController(AGorePlayerController&&) = delete; \
	AGorePlayerController(const AGorePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGorePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGorePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGorePlayerController) \
	NO_API virtual ~AGorePlayerController();


#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GorePlayerController_h_17_PROLOG
#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GorePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GorePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GorePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGorePlayerController;

// ********** End Class AGorePlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GorePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
