// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DejaBrew/CrosshairBoundWidget_cpp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrosshairBoundWidget_cpp() {}
// Cross Module References
	DEJABREW_API UClass* Z_Construct_UClass_UCrosshairBoundWidget_cpp_NoRegister();
	DEJABREW_API UClass* Z_Construct_UClass_UCrosshairBoundWidget_cpp();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DejaBrew();
// End Cross Module References
	void UCrosshairBoundWidget_cpp::StaticRegisterNativesUCrosshairBoundWidget_cpp()
	{
	}
	UClass* Z_Construct_UClass_UCrosshairBoundWidget_cpp_NoRegister()
	{
		return UCrosshairBoundWidget_cpp::StaticClass();
	}
	struct Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DejaBrew,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrosshairBoundWidget_cpp.h" },
		{ "ModuleRelativePath", "CrosshairBoundWidget_cpp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairBoundWidget_cpp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics::ClassParams = {
		&UCrosshairBoundWidget_cpp::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrosshairBoundWidget_cpp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrosshairBoundWidget_cpp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrosshairBoundWidget_cpp, 2480149590);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrosshairBoundWidget_cpp(Z_Construct_UClass_UCrosshairBoundWidget_cpp, &UCrosshairBoundWidget_cpp::StaticClass, TEXT("/Script/DejaBrew"), TEXT("UCrosshairBoundWidget_cpp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrosshairBoundWidget_cpp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
