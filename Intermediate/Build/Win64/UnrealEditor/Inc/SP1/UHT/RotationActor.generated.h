// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RotationActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP1_RotationActor_generated_h
#error "RotationActor.generated.h already included, missing '#pragma once' in RotationActor.h"
#endif
#define SP1_RotationActor_generated_h

#define FID_HW08_Source_SP1_Public_RotationActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotationActor(); \
	friend struct Z_Construct_UClass_ARotationActor_Statics; \
public: \
	DECLARE_CLASS(ARotationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(ARotationActor)


#define FID_HW08_Source_SP1_Public_RotationActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARotationActor(ARotationActor&&); \
	ARotationActor(const ARotationActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotationActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotationActor) \
	NO_API virtual ~ARotationActor();


#define FID_HW08_Source_SP1_Public_RotationActor_h_8_PROLOG
#define FID_HW08_Source_SP1_Public_RotationActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_RotationActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_RotationActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class ARotationActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_RotationActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
