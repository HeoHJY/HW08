// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PawnGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP1_PawnGameMode_generated_h
#error "PawnGameMode.generated.h already included, missing '#pragma once' in PawnGameMode.h"
#endif
#define SP1_PawnGameMode_generated_h

#define FID_HW08_Source_SP1_Public_PawnGameMode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnGameMode(); \
	friend struct Z_Construct_UClass_APawnGameMode_Statics; \
public: \
	DECLARE_CLASS(APawnGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(APawnGameMode)


#define FID_HW08_Source_SP1_Public_PawnGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APawnGameMode(APawnGameMode&&); \
	APawnGameMode(const APawnGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnGameMode) \
	NO_API virtual ~APawnGameMode();


#define FID_HW08_Source_SP1_Public_PawnGameMode_h_8_PROLOG
#define FID_HW08_Source_SP1_Public_PawnGameMode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_PawnGameMode_h_11_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_PawnGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class APawnGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_PawnGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
