// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FallingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SP1_FallingActor_generated_h
#error "FallingActor.generated.h already included, missing '#pragma once' in FallingActor.h"
#endif
#define SP1_FallingActor_generated_h

#define FID_HW08_Source_SP1_Public_FallingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_HW08_Source_SP1_Public_FallingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFallingActor(); \
	friend struct Z_Construct_UClass_AFallingActor_Statics; \
public: \
	DECLARE_CLASS(AFallingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(AFallingActor)


#define FID_HW08_Source_SP1_Public_FallingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFallingActor(AFallingActor&&); \
	AFallingActor(const AFallingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFallingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFallingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFallingActor) \
	NO_API virtual ~AFallingActor();


#define FID_HW08_Source_SP1_Public_FallingActor_h_9_PROLOG
#define FID_HW08_Source_SP1_Public_FallingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_FallingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_FallingActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_FallingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class AFallingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_FallingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
