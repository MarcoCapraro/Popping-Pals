// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/Enemies/EnemyT1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyT1() {}
// Cross Module References
	POPPINGPALS_API UClass* Z_Construct_UClass_ABaseEnemy();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT1();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	void AEnemyT1::StaticRegisterNativesAEnemyT1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyT1);
	UClass* Z_Construct_UClass_AEnemyT1_NoRegister()
	{
		return AEnemyT1::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyT1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyT1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyT1_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/EnemyT1.h" },
		{ "ModuleRelativePath", "Enemies/EnemyT1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyT1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyT1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyT1_Statics::ClassParams = {
		&AEnemyT1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT1_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyT1_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemyT1()
	{
		if (!Z_Registration_Info_UClass_AEnemyT1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyT1.OuterSingleton, Z_Construct_UClass_AEnemyT1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyT1.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<AEnemyT1>()
	{
		return AEnemyT1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyT1);
	AEnemyT1::~AEnemyT1() {}
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyT1, AEnemyT1::StaticClass, TEXT("AEnemyT1"), &Z_Registration_Info_UClass_AEnemyT1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyT1), 3208742583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT1_h_390134425(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
