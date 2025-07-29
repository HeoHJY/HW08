// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP1_MainGameState_generated_h
#error "MainGameState.generated.h already included, missing '#pragma once' in MainGameState.h"
#endif
#define SP1_MainGameState_generated_h

#define FID_HW08_Source_SP1_Public_MainGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_HW08_Source_SP1_Public_MainGameState_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameState(); \
	friend struct Z_Construct_UClass_AMainGameState_Statics; \
public: \
	DECLARE_CLASS(AMainGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(AMainGameState)


#define FID_HW08_Source_SP1_Public_MainGameState_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainGameState(AMainGameState&&); \
	AMainGameState(const AMainGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainGameState) \
	NO_API virtual ~AMainGameState();


#define FID_HW08_Source_SP1_Public_MainGameState_h_8_PROLOG
#define FID_HW08_Source_SP1_Public_MainGameState_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_MainGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_MainGameState_h_11_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_MainGameState_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class AMainGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_MainGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
