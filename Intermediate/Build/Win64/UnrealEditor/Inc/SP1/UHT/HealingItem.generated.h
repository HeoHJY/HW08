// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealingItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP1_HealingItem_generated_h
#error "HealingItem.generated.h already included, missing '#pragma once' in HealingItem.h"
#endif
#define SP1_HealingItem_generated_h

#define FID_HW08_Source_SP1_Public_HealingItem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealingItem(); \
	friend struct Z_Construct_UClass_AHealingItem_Statics; \
public: \
	DECLARE_CLASS(AHealingItem, ABaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(AHealingItem)


#define FID_HW08_Source_SP1_Public_HealingItem_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHealingItem(AHealingItem&&); \
	AHealingItem(const AHealingItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealingItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealingItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealingItem) \
	NO_API virtual ~AHealingItem();


#define FID_HW08_Source_SP1_Public_HealingItem_h_8_PROLOG
#define FID_HW08_Source_SP1_Public_HealingItem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_HealingItem_h_11_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_HealingItem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class AHealingItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_HealingItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
