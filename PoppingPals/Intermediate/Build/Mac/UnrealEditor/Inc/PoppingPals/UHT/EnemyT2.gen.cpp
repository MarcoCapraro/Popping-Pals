// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/EnemyT2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyT2() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	POPPINGPALS_API UClass* Z_Construct_UClass_ABaseEnemy();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT1_NoRegister();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT2();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	void AEnemyT2::StaticRegisterNativesAEnemyT2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyT2);
	UClass* Z_Construct_UClass_AEnemyT2_NoRegister()
	{
		return AEnemyT2::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyT2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_enemyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyT2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyT2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyT2.h" },
		{ "ModuleRelativePath", "EnemyT2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyT2_Statics::NewProp_enemyClass_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "EnemyT2.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyT2_Statics::NewProp_enemyClass = { "enemyClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyT2, enemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyT1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyT2_Statics::NewProp_enemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT2_Statics::NewProp_enemyClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyT2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyT2_Statics::NewProp_enemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyT2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyT2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyT2_Statics::ClassParams = {
		&AEnemyT2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyT2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyT2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyT2()
	{
		if (!Z_Registration_Info_UClass_AEnemyT2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyT2.OuterSingleton, Z_Construct_UClass_AEnemyT2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyT2.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<AEnemyT2>()
	{
		return AEnemyT2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyT2);
	AEnemyT2::~AEnemyT2() {}
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_EnemyT2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_EnemyT2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyT2, AEnemyT2::StaticClass, TEXT("AEnemyT2"), &Z_Registration_Info_UClass_AEnemyT2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyT2), 66995187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_EnemyT2_h_2807823872(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_EnemyT2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_EnemyT2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
