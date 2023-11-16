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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	POPPINGPALS_API UClass* Z_Construct_UClass_APopPal();
	POPPINGPALS_API UClass* Z_Construct_UClass_APopPal_NoRegister();
	POPPINGPALS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_characterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileSpawnComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileSpawnComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_projectileCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APopPal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PopPal.h" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_characterMesh_MetaData[] = {
		{ "Category", "PopPal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_characterMesh = { "characterMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APopPal, characterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_characterMesh_MetaData), Z_Construct_UClass_APopPal_Statics::NewProp_characterMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_projectileSpawnComp_MetaData[] = {
		{ "Category", "PopPal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_projectileSpawnComp = { "projectileSpawnComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APopPal, projectileSpawnComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_projectileSpawnComp_MetaData), Z_Construct_UClass_APopPal_Statics::NewProp_projectileSpawnComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "PopPal" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APopPal, projectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_projectileClass_MetaData), Z_Construct_UClass_APopPal_Statics::NewProp_projectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APopPal, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed_MetaData), Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PopPal.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce = { "jumpForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APopPal, jumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce_MetaData), Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APopPal_Statics::NewProp_projectileCount_MetaData[] = {
		{ "Category", "PopPal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used as a Firing Condition\n" },
#endif
		{ "ModuleRelativePath", "PopPal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used as a Firing Condition" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APopPal_Statics::NewProp_projectileCount = { "projectileCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APopPal, projectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::NewProp_projectileCount_MetaData), Z_Construct_UClass_APopPal_Statics::NewProp_projectileCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APopPal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_characterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_projectileSpawnComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_projectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_jumpForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APopPal_Statics::NewProp_projectileCount,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::Class_MetaDataParams), Z_Construct_UClass_APopPal_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APopPal_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APopPal, APopPal::StaticClass, TEXT("APopPal"), &Z_Registration_Info_UClass_APopPal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APopPal), 797602283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_2606197825(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gianlucacapraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PopPal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
