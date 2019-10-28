// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DejaBrew/DejaBrewGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDejaBrewGameMode() {}
// Cross Module References
	DEJABREW_API UClass* Z_Construct_UClass_ADejaBrewGameMode_NoRegister();
	DEJABREW_API UClass* Z_Construct_UClass_ADejaBrewGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DejaBrew();
// End Cross Module References
	void ADejaBrewGameMode::StaticRegisterNativesADejaBrewGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADejaBrewGameMode_NoRegister()
	{
		return ADejaBrewGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADejaBrewGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADejaBrewGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DejaBrew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DejaBrewGameMode.h" },
		{ "ModuleRelativePath", "DejaBrewGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADejaBrewGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADejaBrewGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADejaBrewGameMode_Statics::ClassParams = {
		&ADejaBrewGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADejaBrewGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADejaBrewGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADejaBrewGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADejaBrewGameMode, 919181428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADejaBrewGameMode(Z_Construct_UClass_ADejaBrewGameMode, &ADejaBrewGameMode::StaticClass, TEXT("/Script/DejaBrew"), TEXT("ADejaBrewGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADejaBrewGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
