// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DejaBrew/Public/SaveGame_DejaBrew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGame_DejaBrew() {}
// Cross Module References
	DEJABREW_API UClass* Z_Construct_UClass_USaveGame_DejaBrew_NoRegister();
	DEJABREW_API UClass* Z_Construct_UClass_USaveGame_DejaBrew();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_DejaBrew();
// End Cross Module References
	void USaveGame_DejaBrew::StaticRegisterNativesUSaveGame_DejaBrew()
	{
	}
	UClass* Z_Construct_UClass_USaveGame_DejaBrew_NoRegister()
	{
		return USaveGame_DejaBrew::StaticClass();
	}
	struct Z_Construct_UClass_USaveGame_DejaBrew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGame_DejaBrew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_DejaBrew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_DejaBrew_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGame_DejaBrew.h" },
		{ "ModuleRelativePath", "Public/SaveGame_DejaBrew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGame_DejaBrew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGame_DejaBrew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGame_DejaBrew_Statics::ClassParams = {
		&USaveGame_DejaBrew::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USaveGame_DejaBrew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGame_DejaBrew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGame_DejaBrew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGame_DejaBrew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGame_DejaBrew, 1851853621);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGame_DejaBrew(Z_Construct_UClass_USaveGame_DejaBrew, &USaveGame_DejaBrew::StaticClass, TEXT("/Script/DejaBrew"), TEXT("USaveGame_DejaBrew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGame_DejaBrew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
