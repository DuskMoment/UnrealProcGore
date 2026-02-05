// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestActor.h"

#ifdef GORE_TestActor_generated_h
#error "TestActor.generated.h already included, missing '#pragma once' in TestActor.h"
#endif
#define GORE_TestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestActor ***************************************************************
struct Z_Construct_UClass_ATestActor_Statics;
GORE_API UClass* Z_Construct_UClass_ATestActor_NoRegister();

#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct ::Z_Construct_UClass_ATestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GORE_API UClass* ::Z_Construct_UClass_ATestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gore"), Z_Construct_UClass_ATestActor_NoRegister) \
	DECLARE_SERIALIZER(ATestActor)


#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestActor(ATestActor&&) = delete; \
	ATestActor(const ATestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestActor) \
	NO_API virtual ~ATestActor();


#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h_9_PROLOG
#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestActor;

// ********** End Class ATestActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_TestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
