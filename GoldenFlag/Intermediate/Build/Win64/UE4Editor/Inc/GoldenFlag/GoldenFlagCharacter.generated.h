// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOLDENFLAG_GoldenFlagCharacter_generated_h
#error "GoldenFlagCharacter.generated.h already included, missing '#pragma once' in GoldenFlagCharacter.h"
#endif
#define GOLDENFLAG_GoldenFlagCharacter_generated_h

#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDirectionInDegree) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDirectionInDegree(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	}


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDirectionInDegree) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDirectionInDegree(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	}


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoldenFlagCharacter(); \
	friend GOLDENFLAG_API class UClass* Z_Construct_UClass_AGoldenFlagCharacter(); \
public: \
	DECLARE_CLASS(AGoldenFlagCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GoldenFlag"), NO_API) \
	DECLARE_SERIALIZER(AGoldenFlagCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGoldenFlagCharacter(); \
	friend GOLDENFLAG_API class UClass* Z_Construct_UClass_AGoldenFlagCharacter(); \
public: \
	DECLARE_CLASS(AGoldenFlagCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GoldenFlag"), NO_API) \
	DECLARE_SERIALIZER(AGoldenFlagCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoldenFlagCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoldenFlagCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoldenFlagCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoldenFlagCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoldenFlagCharacter(AGoldenFlagCharacter&&); \
	NO_API AGoldenFlagCharacter(const AGoldenFlagCharacter&); \
public:


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoldenFlagCharacter(AGoldenFlagCharacter&&); \
	NO_API AGoldenFlagCharacter(const AGoldenFlagCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoldenFlagCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoldenFlagCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoldenFlagCharacter)


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh3P() { return STRUCT_OFFSET(AGoldenFlagCharacter, Mesh3P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGoldenFlagCharacter, FirstPersonCameraComponent); }


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_11_PROLOG
#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_RPC_WRAPPERS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_INCLASS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_INCLASS_NO_PURE_DECLS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoldenFlag_Source_GoldenFlag_GoldenFlagCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
