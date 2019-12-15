// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GoldenFlagHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoldenFlagHUD() {}
// Cross Module References
	GOLDENFLAG_API UClass* Z_Construct_UClass_AGoldenFlagHUD_NoRegister();
	GOLDENFLAG_API UClass* Z_Construct_UClass_AGoldenFlagHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GoldenFlag();
// End Cross Module References
	void AGoldenFlagHUD::StaticRegisterNativesAGoldenFlagHUD()
	{
	}
	UClass* Z_Construct_UClass_AGoldenFlagHUD_NoRegister()
	{
		return AGoldenFlagHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AGoldenFlagHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_GoldenFlag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "GoldenFlagHUD.h" },
				{ "ModuleRelativePath", "GoldenFlagHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGoldenFlagHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGoldenFlagHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoldenFlagHUD, 3417303649);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoldenFlagHUD(Z_Construct_UClass_AGoldenFlagHUD, &AGoldenFlagHUD::StaticClass, TEXT("/Script/GoldenFlag"), TEXT("AGoldenFlagHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoldenFlagHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
