// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GOLDENFLAG_GoldenFlagProjectile_generated_h
#error "GoldenFlagProjectile.generated.h already included, missing '#pragma once' in GoldenFlagProjectile.h"
#endif
#define GOLDENFLAG_GoldenFlagProjectile_generated_h

#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoldenFlagProjectile(); \
	friend GOLDENFLAG_API class UClass* Z_Construct_UClass_AGoldenFlagProjectile(); \
public: \
	DECLARE_CLASS(AGoldenFlagProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GoldenFlag"), NO_API) \
	DECLARE_SERIALIZER(AGoldenFlagProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGoldenFlagProjectile(); \
	friend GOLDENFLAG_API class UClass* Z_Construct_UClass_AGoldenFlagProjectile(); \
public: \
	DECLARE_CLASS(AGoldenFlagProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GoldenFlag"), NO_API) \
	DECLARE_SERIALIZER(AGoldenFlagProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoldenFlagProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoldenFlagProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoldenFlagProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoldenFlagProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoldenFlagProjectile(AGoldenFlagProjectile&&); \
	NO_API AGoldenFlagProjectile(const AGoldenFlagProjectile&); \
public:


#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoldenFlagProjectile(AGoldenFlagProjectile&&); \
	NO_API AGoldenFlagProjectile(const AGoldenFlagProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoldenFlagProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoldenFlagProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoldenFlagProjectile)


#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(AGoldenFlagProjectile, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AGoldenFlagProjectile, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGoldenFlagProjectile, ProjectileMovement); }


#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_9_PROLOG
#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_RPC_WRAPPERS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_INCLASS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_INCLASS_NO_PURE_DECLS \
	GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoldenFlag_Source_GoldenFlag_GoldenFlagProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
