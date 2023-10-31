// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/PoppingPalPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoppingPalPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	POPPINGPALS_API UClass* Z_Construct_UClass_APoppingPalPlayerController();
	POPPINGPALS_API UClass* Z_Construct_UClass_APoppingPalPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	void APoppingPalPlayerController::StaticRegisterNativesAPoppingPalPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoppingPalPlayerController);
	UClass* Z_Construct_UClass_APoppingPalPlayerController_NoRegister()
	{
		return APoppingPalPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APoppingPalPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoppingPalPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPalPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PoppingPalPlayerController.h" },
		{ "ModuleRelativePath", "PoppingPalPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoppingPalPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoppingPalPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoppingPalPlayerController_Statics::ClassParams = {
		&APoppingPalPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APoppingPalPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPalPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoppingPalPlayerController()
	{
		if (!Z_Registration_Info_UClass_APoppingPalPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoppingPalPlayerController.OuterSingleton, Z_Construct_UClass_APoppingPalPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoppingPalPlayerController.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<APoppingPalPlayerController>()
	{
		return APoppingPalPlayerController::StaticClass();
	}
	APoppingPalPlayerController::APoppingPalPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoppingPalPlayerController);
	APoppingPalPlayerController::~APoppingPalPlayerController() {}
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoppingPalPlayerController, APoppingPalPlayerController::StaticClass, TEXT("APoppingPalPlayerController"), &Z_Registration_Info_UClass_APoppingPalPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoppingPalPlayerController), 2900150723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalPlayerController_h_3016585152(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_PoppingPalPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
