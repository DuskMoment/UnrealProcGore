// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketData.h"

#ifdef GORE_SocketData_generated_h
#error "SocketData.generated.h already included, missing '#pragma once' in SocketData.h"
#endif
#define GORE_SocketData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USocketData **********************************************************
struct Z_Construct_UClass_USocketData_Statics;
GORE_API UClass* Z_Construct_UClass_USocketData_NoRegister();

#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocketData(USocketData&&) = delete; \
	USocketData(const USocketData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketData) \
	virtual ~USocketData() = default;


#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSocketData(); \
	friend struct ::Z_Construct_UClass_USocketData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GORE_API UClass* ::Z_Construct_UClass_USocketData_NoRegister(); \
public: \
	DECLARE_CLASS2(USocketData, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Gore"), Z_Construct_UClass_USocketData_NoRegister) \
	DECLARE_SERIALIZER(USocketData)


#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISocketData() {} \
public: \
	typedef USocketData UClassType; \
	typedef ISocketData ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_12_PROLOG
#define FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocketData;

// ********** End Interface USocketData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wmans_OneDrive_Desktop_Git_Projects_Gore_UnrealProcGore_Gore_Source_Gore_Public_SocketData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
