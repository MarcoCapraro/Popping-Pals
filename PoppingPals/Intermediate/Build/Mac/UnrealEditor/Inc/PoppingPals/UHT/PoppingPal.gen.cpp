// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/PoppingPal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoppingPal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	POPPINGPALS_API UClass* Z_Construct_UClass_APoppingPal();
	POPPINGPALS_API UClass* Z_Construct_UClass_APoppingPal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	void APoppingPal::StaticRegisterNativesAPoppingPal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoppingPal);
	UClass* Z_Construct_UClass_APoppingPal_NoRegister()
	{
		return APoppingPal::StaticClass();
	}
	struct Z_Construct_UClass_APoppingPal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_capsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_capsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_baseMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoppingPal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PoppingPal.h" },
		{ "ModuleRelativePath", "PoppingPal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPal_Statics::NewProp_capsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PoppingPal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoppingPal_Statics::NewProp_capsuleComp = { "capsuleComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APoppingPal, capsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoppingPal_Statics::NewProp_capsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPal_Statics::NewProp_capsuleComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPal_Statics::NewProp_baseMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PoppingPal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoppingPal_Statics::NewProp_baseMeshComp = { "baseMeshComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APoppingPal, baseMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoppingPal_Statics::NewProp_baseMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPal_Statics::NewProp_baseMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPal_Statics::NewProp_springArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PoppingPal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoppingPal_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APoppingPal, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoppingPal_Statics::NewProp_springArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPal_Statics::NewProp_springArmComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPal_Statics::NewProp_cameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PoppingPal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoppingPal_Statics::NewProp_cameraComp = { "cameraComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APoppingPal, cameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoppingPal_Statics::NewProp_cameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPal_Statics::NewProp_cameraComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPal_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PoppingPal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APoppingPal_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APoppingPal, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_APoppingPal_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPal_Statics::NewProp_moveSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoppingPal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoppingPal_Statics::NewProp_capsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoppingPal_Statics::NewProp_baseMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoppingPal_Statics::NewProp_springArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoppingPal_Statics::NewProp_cameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoppingPal_Statics::NewProp_moveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoppingPal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoppingPal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoppingPal_Statics::ClassParams = {
		&APoppingPal::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APoppingPal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APoppingPal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoppingPal()
	{
		if (!Z_Registration_Info_UClass_APoppingPal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoppingPal.OuterSingleton, Z_Construct_UClass_APoppingPal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoppingPal.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<APoppingPal>()
	{
		return APoppingPal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoppingPal);
	APoppingPal::~APoppingPal() {}
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoppingPal, APoppingPal::StaticClass, TEXT("APoppingPal"), &Z_Registration_Info_UClass_APoppingPal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoppingPal), 2822232656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPal_h_1541081517(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
