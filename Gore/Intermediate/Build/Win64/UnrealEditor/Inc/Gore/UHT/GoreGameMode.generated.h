// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoreGameMode.h"

#ifdef GORE_GoreGameMode_generated_h
#error "GoreGameMode.generated.h already included, missing '#pragma once' in GoreGameMode.h"
#endif
#define GORE_GoreGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGoreGameMode ************************************************************
struct Z_Construct_UClass_AGoreGameMode_Statics;
GORE_API UClass* Z_Construct_UClass_AGoreGameMode_NoRegister();

#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoreGameMode(); \
	friend struct ::Z_Construct_UClass_AGoreGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GORE_API UClass* ::Z_Construct_UClass_AGoreGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AGoreGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gore"), Z_Construct_UClass_AGoreGameMode_NoRegister) \
	DECLARE_SERIALIZER(AGoreGameMode)


#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGoreGameMode(AGoreGameMode&&) = delete; \
	AGoreGameMode(const AGoreGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoreGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoreGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGoreGameMode) \
	NO_API virtual ~AGoreGameMode();


#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h_12_PROLOG
#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGoreGameMode;

// ********** End Class AGoreGameMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
