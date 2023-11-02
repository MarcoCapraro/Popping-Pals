// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/PopPal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopPal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	POPPINGPALS_API UClass* Z_Construct_UClass_APopPal();
	POPPINGPALS_API UClass* Z_Construct_UClass_APopPal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	void APopPal::StaticRegisterNativesAPopPal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APopPal);
	UClass* Z_Construct_UClass_APopPal_NoRegister()
	{
		return APopPal::StaticClass();
	}
	struct Z_Construct_UClass_APopPal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APopPal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PopPal.h" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopPal, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce = { "jumpForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APopPal, jumpForce), METADATA_PARAMS(Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APopPal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APopPal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APopPal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APopPal_Statics::ClassParams = {
		&APopPal::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APopPal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APopPal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APopPal()
	{
		if (!Z_Registration_Info_UClass_APopPal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APopPal.OuterSingleton, Z_Construct_UClass_APopPal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APopPal.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<APopPal>()
	{
		return APopPal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APopPal);
	APopPal::~APopPal() {}
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APopPal, APopPal::StaticClass, TEXT("APopPal"), &Z_Registration_Info_UClass_APopPal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APopPal), 2128795003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_634677188(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
