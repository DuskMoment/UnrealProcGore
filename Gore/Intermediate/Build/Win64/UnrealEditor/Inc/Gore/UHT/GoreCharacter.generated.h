// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoreCharacter.h"

#ifdef GORE_GoreCharacter_generated_h
#error "GoreCharacter.generated.h already included, missing '#pragma once' in GoreCharacter.h"
#endif
#define GORE_GoreCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGoreCharacter ***********************************************************
#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_AGoreCharacter_Statics;
GORE_API UClass* Z_Construct_UClass_AGoreCharacter_NoRegister();

#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoreCharacter(); \
	friend struct ::Z_Construct_UClass_AGoreCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GORE_API UClass* ::Z_Construct_UClass_AGoreCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGoreCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gore"), Z_Construct_UClass_AGoreCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGoreCharacter)


#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGoreCharacter(AGoreCharacter&&) = delete; \
	AGoreCharacter(const AGoreCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoreCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoreCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGoreCharacter) \
	NO_API virtual ~AGoreCharacter();


#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_21_PROLOG
#define FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGoreCharacter;

// ********** End Class AGoreCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wmans_Desktop_Git_Projects_UnrealProcGore_Gore_Source_Gore_GoreCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
