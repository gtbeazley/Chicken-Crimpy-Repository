// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEJABREW_DejaBrewCharacter_generated_h
#error "DejaBrewCharacter.generated.h already included, missing '#pragma once' in DejaBrewCharacter.h"
#endif
#define DEJABREW_DejaBrewCharacter_generated_h

#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMouseSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_a_newMouseSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSpeed(Z_Param_a_newMouseSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCompressionCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentCompressionCharge(); \
		P_NATIVE_END; \
	}


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMouseSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_a_newMouseSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSpeed(Z_Param_a_newMouseSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCompressionCharge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentCompressionCharge(); \
		P_NATIVE_END; \
	}


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADejaBrewCharacter(); \
	friend struct Z_Construct_UClass_ADejaBrewCharacter_Statics; \
public: \
	DECLARE_CLASS(ADejaBrewCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DejaBrew"), NO_API) \
	DECLARE_SERIALIZER(ADejaBrewCharacter)


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADejaBrewCharacter(); \
	friend struct Z_Construct_UClass_ADejaBrewCharacter_Statics; \
public: \
	DECLARE_CLASS(ADejaBrewCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DejaBrew"), NO_API) \
	DECLARE_SERIALIZER(ADejaBrewCharacter)


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADejaBrewCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADejaBrewCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADejaBrewCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADejaBrewCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADejaBrewCharacter(ADejaBrewCharacter&&); \
	NO_API ADejaBrewCharacter(const ADejaBrewCharacter&); \
public:


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADejaBrewCharacter(ADejaBrewCharacter&&); \
	NO_API ADejaBrewCharacter(const ADejaBrewCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADejaBrewCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADejaBrewCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADejaBrewCharacter)


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCamera() { return STRUCT_OFFSET(ADejaBrewCharacter, SideViewCamera); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADejaBrewCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CrosshairBoundWidget() { return STRUCT_OFFSET(ADejaBrewCharacter, CrosshairBoundWidget); } \
	FORCEINLINE static uint32 __PPO__CrosshairWidget() { return STRUCT_OFFSET(ADejaBrewCharacter, CrosshairWidget); } \
	FORCEINLINE static uint32 __PPO__bIsCharging() { return STRUCT_OFFSET(ADejaBrewCharacter, bIsCharging); } \
	FORCEINLINE static uint32 __PPO__bCanShoot() { return STRUCT_OFFSET(ADejaBrewCharacter, bCanShoot); } \
	FORCEINLINE static uint32 __PPO__bHasShot() { return STRUCT_OFFSET(ADejaBrewCharacter, bHasShot); } \
	FORCEINLINE static uint32 __PPO__m_mouseSpeed() { return STRUCT_OFFSET(ADejaBrewCharacter, m_mouseSpeed); } \
	FORCEINLINE static uint32 __PPO__m_moveSpeed() { return STRUCT_OFFSET(ADejaBrewCharacter, m_moveSpeed); } \
	FORCEINLINE static uint32 __PPO__m_CameraMoveSpeed() { return STRUCT_OFFSET(ADejaBrewCharacter, m_CameraMoveSpeed); } \
	FORCEINLINE static uint32 __PPO__m_maxCursorDistance() { return STRUCT_OFFSET(ADejaBrewCharacter, m_maxCursorDistance); } \
	FORCEINLINE static uint32 __PPO__m_timeLeftForCharging() { return STRUCT_OFFSET(ADejaBrewCharacter, m_timeLeftForCharging); } \
	FORCEINLINE static uint32 __PPO__m_timeTillChargeLimit() { return STRUCT_OFFSET(ADejaBrewCharacter, m_timeTillChargeLimit); } \
	FORCEINLINE static uint32 __PPO__m_chargeSpeed() { return STRUCT_OFFSET(ADejaBrewCharacter, m_chargeSpeed); } \
	FORCEINLINE static uint32 __PPO__m_chargeChangeImpact() { return STRUCT_OFFSET(ADejaBrewCharacter, m_chargeChangeImpact); } \
	FORCEINLINE static uint32 __PPO__m_initialCompressionCharge() { return STRUCT_OFFSET(ADejaBrewCharacter, m_initialCompressionCharge); } \
	FORCEINLINE static uint32 __PPO__m_compressionCharge() { return STRUCT_OFFSET(ADejaBrewCharacter, m_compressionCharge); }


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_9_PROLOG
#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_RPC_WRAPPERS \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_INCLASS \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DejaBrew_Source_DejaBrew_DejaBrewCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DejaBrew_Source_DejaBrew_DejaBrewCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
