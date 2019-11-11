// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DejaBrew/SlimeEnemy_PC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlimeEnemy_PC() {}
// Cross Module References
	DEJABREW_API UClass* Z_Construct_UClass_ASlimeEnemy_PC_NoRegister();
	DEJABREW_API UClass* Z_Construct_UClass_ASlimeEnemy_PC();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_DejaBrew();
// End Cross Module References
	void ASlimeEnemy_PC::StaticRegisterNativesASlimeEnemy_PC()
	{
	}
	UClass* Z_Construct_UClass_ASlimeEnemy_PC_NoRegister()
	{
		return ASlimeEnemy_PC::StaticClass();
	}
	struct Z_Construct_UClass_ASlimeEnemy_PC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlimeEnemy_PC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DejaBrew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlimeEnemy_PC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SlimeEnemy_PC.h" },
		{ "ModuleRelativePath", "SlimeEnemy_PC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlimeEnemy_PC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlimeEnemy_PC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlimeEnemy_PC_Statics::ClassParams = {
		&ASlimeEnemy_PC::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASlimeEnemy_PC_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlimeEnemy_PC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlimeEnemy_PC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlimeEnemy_PC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlimeEnemy_PC, 1134722278);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlimeEnemy_PC(Z_Construct_UClass_ASlimeEnemy_PC, &ASlimeEnemy_PC::StaticClass, TEXT("/Script/DejaBrew"), TEXT("ASlimeEnemy_PC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlimeEnemy_PC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
