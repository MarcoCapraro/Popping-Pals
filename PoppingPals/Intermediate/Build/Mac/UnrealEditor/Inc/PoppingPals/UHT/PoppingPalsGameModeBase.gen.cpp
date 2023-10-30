// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/PoppingPalsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoppingPalsGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	POPPINGPALS_API UClass* Z_Construct_UClass_APoppingPalsGameModeBase();
	POPPINGPALS_API UClass* Z_Construct_UClass_APoppingPalsGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	void APoppingPalsGameModeBase::StaticRegisterNativesAPoppingPalsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoppingPalsGameModeBase);
	UClass* Z_Construct_UClass_APoppingPalsGameModeBase_NoRegister()
	{
		return APoppingPalsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APoppingPalsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoppingPalsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPalsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PoppingPalsGameModeBase.h" },
		{ "ModuleRelativePath", "PoppingPalsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoppingPalsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoppingPalsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoppingPalsGameModeBase_Statics::ClassParams = {
		&APoppingPalsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APoppingPalsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPalsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoppingPalsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APoppingPalsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoppingPalsGameModeBase.OuterSingleton, Z_Construct_UClass_APoppingPalsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoppingPalsGameModeBase.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<APoppingPalsGameModeBase>()
	{
		return APoppingPalsGameModeBase::StaticClass();
	}
	APoppingPalsGameModeBase::APoppingPalsGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoppingPalsGameModeBase);
	APoppingPalsGameModeBase::~APoppingPalsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoppingPalsGameModeBase, APoppingPalsGameModeBase::StaticClass, TEXT("APoppingPalsGameModeBase"), &Z_Registration_Info_UClass_APoppingPalsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoppingPalsGameModeBase), 775333123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalsGameModeBase_h_3985361029(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
