// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlowDebuffItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP1_SlowDebuffItem_generated_h
#error "SlowDebuffItem.generated.h already included, missing '#pragma once' in SlowDebuffItem.h"
#endif
#define SP1_SlowDebuffItem_generated_h

#define FID_HW08_Source_SP1_Public_SlowDebuffItem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlowDebuffItem(); \
	friend struct Z_Construct_UClass_ASlowDebuffItem_Statics; \
public: \
	DECLARE_CLASS(ASlowDebuffItem, ADebuffItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(ASlowDebuffItem)


#define FID_HW08_Source_SP1_Public_SlowDebuffItem_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASlowDebuffItem(ASlowDebuffItem&&); \
	ASlowDebuffItem(const ASlowDebuffItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlowDebuffItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlowDebuffItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlowDebuffItem) \
	NO_API virtual ~ASlowDebuffItem();


#define FID_HW08_Source_SP1_Public_SlowDebuffItem_h_7_PROLOG
#define FID_HW08_Source_SP1_Public_SlowDebuffItem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_SlowDebuffItem_h_10_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_SlowDebuffItem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class ASlowDebuffItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_SlowDebuffItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
