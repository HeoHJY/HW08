// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SP1/Public/FlyingPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
SP1_API UClass* Z_Construct_UClass_AFlyingPawn();
SP1_API UClass* Z_Construct_UClass_AFlyingPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SP1();
// End Cross Module References

// Begin Class AFlyingPawn Function Look
struct Z_Construct_UFunction_AFlyingPawn_Look_Statics
{
	struct FlyingPawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlyingPawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlyingPawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyingPawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyingPawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingPawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyingPawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyingPawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AFlyingPawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingPawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlyingPawn_Look_Statics::FlyingPawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingPawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlyingPawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlyingPawn_Look_Statics::FlyingPawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlyingPawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyingPawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlyingPawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AFlyingPawn Function Look

// Begin Class AFlyingPawn Function Move
struct Z_Construct_UFunction_AFlyingPawn_Move_Statics
{
	struct FlyingPawn_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlyingPawn_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlyingPawn_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlyingPawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlyingPawn_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingPawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlyingPawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlyingPawn, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AFlyingPawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingPawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlyingPawn_Move_Statics::FlyingPawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlyingPawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlyingPawn_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlyingPawn_Move_Statics::FlyingPawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlyingPawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlyingPawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlyingPawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AFlyingPawn Function Move

// Begin Class AFlyingPawn
void AFlyingPawn::StaticRegisterNativesAFlyingPawn()
{
	UClass* Class = AFlyingPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AFlyingPawn::execLook },
		{ "Move", &AFlyingPawn::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlyingPawn);
UClass* Z_Construct_UClass_AFlyingPawn_NoRegister()
{
	return AFlyingPawn::StaticClass();
}
struct Z_Construct_UClass_AFlyingPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlyingPawn.h" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components|Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComp_MetaData[] = {
		{ "Category", "Components|Arrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "Components|Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookSens_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookSens;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlyingPawn_Look, "Look" }, // 143124422
		{ &Z_Construct_UFunction_AFlyingPawn_Move, "Move" }, // 4031403682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_ArrowComp = { "ArrowComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, ArrowComp), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComp_MetaData), NewProp_ArrowComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_LookSens = { "LookSens", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, LookSens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookSens_MetaData), NewProp_LookSens_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlyingPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_ArrowComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_LookSens,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlyingPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SP1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlyingPawn_Statics::ClassParams = {
	&AFlyingPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlyingPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlyingPawn()
{
	if (!Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton, Z_Construct_UClass_AFlyingPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton;
}
template<> SP1_API UClass* StaticClass<AFlyingPawn>()
{
	return AFlyingPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingPawn);
AFlyingPawn::~AFlyingPawn() {}
// End Class AFlyingPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_FlyingPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlyingPawn, AFlyingPawn::StaticClass, TEXT("AFlyingPawn"), &Z_Registration_Info_UClass_AFlyingPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlyingPawn), 4049592640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_FlyingPawn_h_955470905(TEXT("/Script/SP1"),
	Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_FlyingPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW08_Source_SP1_Public_FlyingPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
