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
	struct PoppingPalsGameModeBase_eventGameOver_Parms
	{
		bool bWonGame;
	};
	static FName NAME_APoppingPalsGameModeBase_GameOver = FName(TEXT("GameOver"));
	void APoppingPalsGameModeBase::GameOver(bool bWonGame)
	{
		PoppingPalsGameModeBase_eventGameOver_Parms Parms;
		Parms.bWonGame=bWonGame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APoppingPalsGameModeBase_GameOver),&Parms);
	}
	void APoppingPalsGameModeBase::StaticRegisterNativesAPoppingPalsGameModeBase()
	{
	}
	struct Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics
	{
		static void NewProp_bWonGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWonGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::NewProp_bWonGame_SetBit(void* Obj)
	{
		((PoppingPalsGameModeBase_eventGameOver_Parms*)Obj)->bWonGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::NewProp_bWonGame = { "bWonGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PoppingPalsGameModeBase_eventGameOver_Parms), &Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::NewProp_bWonGame_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::NewProp_bWonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PoppingPalsGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APoppingPalsGameModeBase, nullptr, "GameOver", nullptr, nullptr, Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::PropPointers), sizeof(PoppingPalsGameModeBase_eventGameOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::PropPointers) < 2048);
	static_assert(sizeof(PoppingPalsGameModeBase_eventGameOver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoppingPalsGameModeBase);
	UClass* Z_Construct_UClass_APoppingPalsGameModeBase_NoRegister()
	{
		return APoppingPalsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APoppingPalsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPalsGameModeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APoppingPalsGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APoppingPalsGameModeBase_GameOver, "GameOver" }, // 3171160684
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPalsGameModeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoppingPalsGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoppingPalsGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APoppingPalsGameModeBase_Statics::Class_MetaDataParams)
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
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoppingPalsGameModeBase, APoppingPalsGameModeBase::StaticClass, TEXT("APoppingPalsGameModeBase"), &Z_Registration_Info_UClass_APoppingPalsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoppingPalsGameModeBase), 3382333797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_PoppingPalsGameModeBase_h_2927105455(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_PoppingPalsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
