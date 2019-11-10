// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DejaBrew/DejaBrewCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDejaBrewCharacter() {}
// Cross Module References
	DEJABREW_API UClass* Z_Construct_UClass_ADejaBrewCharacter_NoRegister();
	DEJABREW_API UClass* Z_Construct_UClass_ADejaBrewCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DejaBrew();
	DEJABREW_API UFunction* Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge();
	DEJABREW_API UFunction* Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed();
	DEJABREW_API UFunction* Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ADejaBrewCharacter::StaticRegisterNativesADejaBrewCharacter()
	{
		UClass* Class = ADejaBrewCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentCompressionCharge", &ADejaBrewCharacter::execGetCurrentCompressionCharge },
			{ "GetMouseSpeed", &ADejaBrewCharacter::execGetMouseSpeed },
			{ "SetMouseSpeed", &ADejaBrewCharacter::execSetMouseSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics
	{
		struct DejaBrewCharacter_eventGetCurrentCompressionCharge_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DejaBrewCharacter_eventGetCurrentCompressionCharge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
		{ "ToolTip", "Acceses current Compression Charge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADejaBrewCharacter, "GetCurrentCompressionCharge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(DejaBrewCharacter_eventGetCurrentCompressionCharge_Parms), Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics
	{
		struct DejaBrewCharacter_eventGetMouseSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DejaBrewCharacter_eventGetMouseSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
		{ "ToolTip", "Accesses the current Mouse Speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADejaBrewCharacter, "GetMouseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(DejaBrewCharacter_eventGetMouseSpeed_Parms), Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics
	{
		struct DejaBrewCharacter_eventSetMouseSpeed_Parms
		{
			float a_newMouseSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_a_newMouseSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::NewProp_a_newMouseSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "a_newMouseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DejaBrewCharacter_eventSetMouseSpeed_Parms, a_newMouseSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::NewProp_a_newMouseSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
		{ "ToolTip", "Sets the speed of the mouse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADejaBrewCharacter, "SetMouseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DejaBrewCharacter_eventSetMouseSpeed_Parms), Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADejaBrewCharacter_NoRegister()
	{
		return ADejaBrewCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADejaBrewCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_compressionCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_compressionCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_initialCompressionCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_initialCompressionCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_chargeChangeImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_chargeChangeImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_chargeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_chargeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_timeTillChargeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_timeTillChargeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_timeLeftForCharging_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_timeLeftForCharging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_maxCursorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_maxCursorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_moveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_moveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_sprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mouseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_mouseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCharging_MetaData[];
#endif
		static void NewProp_bIsCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCharging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairBoundWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairBoundWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADejaBrewCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DejaBrew,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADejaBrewCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADejaBrewCharacter_GetCurrentCompressionCharge, "GetCurrentCompressionCharge" }, // 514312904
		{ &Z_Construct_UFunction_ADejaBrewCharacter_GetMouseSpeed, "GetMouseSpeed" }, // 2182165318
		{ &Z_Construct_UFunction_ADejaBrewCharacter_SetMouseSpeed, "SetMouseSpeed" }, // 1554604000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DejaBrewCharacter.h" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_compressionCharge_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_compressionCharge = { UE4CodeGen_Private::EPropertyClass::Float, "m_compressionCharge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_compressionCharge), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_compressionCharge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_compressionCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_initialCompressionCharge_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_initialCompressionCharge = { UE4CodeGen_Private::EPropertyClass::Float, "m_initialCompressionCharge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_initialCompressionCharge), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_initialCompressionCharge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_initialCompressionCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeChangeImpact_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeChangeImpact = { UE4CodeGen_Private::EPropertyClass::Float, "m_chargeChangeImpact", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_chargeChangeImpact), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeChangeImpact_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeChangeImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeSpeed_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "m_chargeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_chargeSpeed), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeTillChargeLimit_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeTillChargeLimit = { UE4CodeGen_Private::EPropertyClass::Float, "m_timeTillChargeLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_timeTillChargeLimit), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeTillChargeLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeTillChargeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeLeftForCharging_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeLeftForCharging = { UE4CodeGen_Private::EPropertyClass::Float, "m_timeLeftForCharging", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_timeLeftForCharging), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeLeftForCharging_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeLeftForCharging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_maxCursorDistance_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_maxCursorDistance = { UE4CodeGen_Private::EPropertyClass::Float, "m_maxCursorDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_maxCursorDistance), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_maxCursorDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_maxCursorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_moveSpeed_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_moveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "m_moveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_moveSpeed), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_moveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_sprintSpeed_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_sprintSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "m_sprintSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_sprintSpeed), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_sprintSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_sprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_mouseSpeed_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_mouseSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "m_mouseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, m_mouseSpeed), METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_mouseSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_mouseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((ADejaBrewCharacter*)Obj)->bCanShoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bCanShoot = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanShoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADejaBrewCharacter), &Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bCanShoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bCanShoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bIsCharging_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bIsCharging_SetBit(void* Obj)
	{
		((ADejaBrewCharacter*)Obj)->bIsCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bIsCharging = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCharging", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADejaBrewCharacter), &Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bIsCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bIsCharging_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bIsCharging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairWidget_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
		{ "ToolTip", "The Crosshair widgety that will determine the blast strength and length" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CrosshairWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, CrosshairWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairBoundWidget_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
		{ "ToolTip", "The bounds that the cross can not pass, only a widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairBoundWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CrosshairBoundWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, CrosshairBoundWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairBoundWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairBoundWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera bebside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_SideViewCamera_MetaData[] = {
		{ "Category", "DejaBrewCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DejaBrewCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_SideViewCamera = { UE4CodeGen_Private::EPropertyClass::Object, "SideViewCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ADejaBrewCharacter, SideViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_SideViewCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_SideViewCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADejaBrewCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_compressionCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_initialCompressionCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeChangeImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_chargeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeTillChargeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_timeLeftForCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_maxCursorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_moveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_sprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_m_mouseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bCanShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_bIsCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CrosshairBoundWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADejaBrewCharacter_Statics::NewProp_SideViewCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADejaBrewCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADejaBrewCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADejaBrewCharacter_Statics::ClassParams = {
		&ADejaBrewCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ADejaBrewCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADejaBrewCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADejaBrewCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADejaBrewCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADejaBrewCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADejaBrewCharacter, 2410766859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADejaBrewCharacter(Z_Construct_UClass_ADejaBrewCharacter, &ADejaBrewCharacter::StaticClass, TEXT("/Script/DejaBrew"), TEXT("ADejaBrewCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADejaBrewCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
