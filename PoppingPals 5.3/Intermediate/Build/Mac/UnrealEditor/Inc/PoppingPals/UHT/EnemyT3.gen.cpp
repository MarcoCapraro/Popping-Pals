// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/Enemies/EnemyT3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyT3() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	POPPINGPALS_API UClass* Z_Construct_UClass_ABaseEnemy();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT2_NoRegister();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT3();
	POPPINGPALS_API UClass* Z_Construct_UClass_AEnemyT3_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	void AEnemyT3::StaticRegisterNativesAEnemyT3()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyT3);
	UClass* Z_Construct_UClass_AEnemyT3_NoRegister()
	{
		return AEnemyT3::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyT3_Statics
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
	UObject* (*const Z_Construct_UClass_AEnemyT3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT3_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyT3_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemies/EnemyT3.h" },
		{ "ModuleRelativePath", "Enemies/EnemyT3.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyT3_Statics::NewProp_enemyClass_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Enemies/EnemyT3.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyT3_Statics::NewProp_enemyClass = { "enemyClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyT3, enemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyT2_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT3_Statics::NewProp_enemyClass_MetaData), Z_Construct_UClass_AEnemyT3_Statics::NewProp_enemyClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyT3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyT3_Statics::NewProp_enemyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyT3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyT3>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyT3_Statics::ClassParams = {
		&AEnemyT3::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyT3_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT3_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT3_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyT3_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyT3_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyT3()
	{
		if (!Z_Registration_Info_UClass_AEnemyT3.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyT3.OuterSingleton, Z_Construct_UClass_AEnemyT3_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyT3.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<AEnemyT3>()
	{
		return AEnemyT3::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyT3);
	AEnemyT3::~AEnemyT3() {}
	struct Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT3_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT3_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyT3, AEnemyT3::StaticClass, TEXT("AEnemyT3"), &Z_Registration_Info_UClass_AEnemyT3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyT3), 253551016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT3_h_2068047230(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_EnemyT3_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
