// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SP1_MainGameInstance_generated_h
#error "MainGameInstance.generated.h already included, missing '#pragma once' in MainGameInstance.h"
#endif
#define SP1_MainGameInstance_generated_h

#define FID_HW08_Source_SP1_Public_MainGameInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddToScore);


#define FID_HW08_Source_SP1_Public_MainGameInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainGameInstance(); \
	friend struct Z_Construct_UClass_UMainGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMainGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SP1"), NO_API) \
	DECLARE_SERIALIZER(UMainGameInstance)


#define FID_HW08_Source_SP1_Public_MainGameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainGameInstance(UMainGameInstance&&); \
	UMainGameInstance(const UMainGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMainGameInstance) \
	NO_API virtual ~UMainGameInstance();


#define FID_HW08_Source_SP1_Public_MainGameInstance_h_8_PROLOG
#define FID_HW08_Source_SP1_Public_MainGameInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW08_Source_SP1_Public_MainGameInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_MainGameInstance_h_11_INCLASS_NO_PURE_DECLS \
	FID_HW08_Source_SP1_Public_MainGameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SP1_API UClass* StaticClass<class UMainGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW08_Source_SP1_Public_MainGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
