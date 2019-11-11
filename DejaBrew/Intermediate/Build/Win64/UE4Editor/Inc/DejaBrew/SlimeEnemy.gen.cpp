// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DejaBrew/SlimeEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlimeEnemy() {}
// Cross Module References
	DEJABREW_API UClass* Z_Construct_UClass_ASlimeEnemy_NoRegister();
	DEJABREW_API UClass* Z_Construct_UClass_ASlimeEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DejaBrew();
// End Cross Module References
	void ASlimeEnemy::StaticRegisterNativesASlimeEnemy()
	{
	}
	UClass* Z_Construct_UClass_ASlimeEnemy_NoRegister()
	{
		return ASlimeEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ASlimeEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlimeEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DejaBrew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlimeEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SlimeEnemy.h" },
		{ "ModuleRelativePath", "SlimeEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlimeEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlimeEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlimeEnemy_Statics::ClassParams = {
		&ASlimeEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASlimeEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlimeEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlimeEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlimeEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlimeEnemy, 172688274);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlimeEnemy(Z_Construct_UClass_ASlimeEnemy, &ASlimeEnemy::StaticClass, TEXT("/Script/DejaBrew"), TEXT("ASlimeEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlimeEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
