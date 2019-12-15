// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GoldenFlagGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoldenFlagGameMode() {}
// Cross Module References
	GOLDENFLAG_API UClass* Z_Construct_UClass_AGoldenFlagGameMode_NoRegister();
	GOLDENFLAG_API UClass* Z_Construct_UClass_AGoldenFlagGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GoldenFlag();
// End Cross Module References
	void AGoldenFlagGameMode::StaticRegisterNativesAGoldenFlagGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGoldenFlagGameMode_NoRegister()
	{
		return AGoldenFlagGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGoldenFlagGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_GoldenFlag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GoldenFlagGameMode.h" },
				{ "ModuleRelativePath", "GoldenFlagGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGoldenFlagGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGoldenFlagGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoldenFlagGameMode, 1907663221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoldenFlagGameMode(Z_Construct_UClass_AGoldenFlagGameMode, &AGoldenFlagGameMode::StaticClass, TEXT("/Script/GoldenFlag"), TEXT("AGoldenFlagGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoldenFlagGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
