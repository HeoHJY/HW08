// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSP1_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SP1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SP1()
	{
		if (!Z_Registration_Info_UPackage__Script_SP1.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SP1",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFE87FDB2,
				0x2DD5E2C8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SP1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SP1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SP1(Z_Construct_UPackage__Script_SP1, TEXT("/Script/SP1"), Z_Registration_Info_UPackage__Script_SP1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFE87FDB2, 0x2DD5E2C8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
