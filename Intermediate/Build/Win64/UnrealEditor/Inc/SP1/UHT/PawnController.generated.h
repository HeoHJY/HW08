// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PawnController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP1_PawnController_generated_h
#error "PawnController.generated.h already included, missing '#pragma once' in PawnController.h"
#endif
#define SP1_PawnController_generated_h

#define FID_HW08_Source_SP1_Public_PawnController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnController(); \
	friend struct Z_Construct_UClass_APawnController_Statics; \
public: \
	DECLARE_CLASS(APawnController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(APawnController)


#define FID_HW08_Source_SP1_Public_PawnController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APawnController(APawnController&&); \
	APawnController(const APawnController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnController) \
	NO_API virtual ~APawnController();


#define FID_HW08_Source_SP1_Public_PawnController_h_10_PROLOG
#define FID_HW08_Source_SP1_Public_PawnController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_PawnController_h_13_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_PawnController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class APawnController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_PawnController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
