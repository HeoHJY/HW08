// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef SP1_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define SP1_MainPlayerController_generated_h

#define FID_HW08_Source_SP1_Public_MainPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResumeGame); \
	DECLARE_FUNCTION(execShowPauseMenu); \
	DECLARE_FUNCTION(execReturnMenu); \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execShowGameHUD); \
	DECLARE_FUNCTION(execGetHUDWidget);


#define FID_HW08_Source_SP1_Public_MainPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FID_HW08_Source_SP1_Public_MainPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainPlayerController(AMainPlayerController&&); \
	AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayerController) \
	NO_API virtual ~AMainPlayerController();


#define FID_HW08_Source_SP1_Public_MainPlayerController_h_10_PROLOG
#define FID_HW08_Source_SP1_Public_MainPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_MainPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_MainPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_MainPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
