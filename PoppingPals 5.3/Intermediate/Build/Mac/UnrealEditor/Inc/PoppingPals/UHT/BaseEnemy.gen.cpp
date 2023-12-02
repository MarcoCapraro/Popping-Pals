// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/Enemies/BaseEnemy.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	POPPINGPALS_API UClass* Z_Construct_UClass_ABaseEnemy();
	POPPINGPALS_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	POPPINGPALS_API UEnum* Z_Construct_UEnum_PoppingPals_EBounceHeight();
	POPPINGPALS_API UEnum* Z_Construct_UEnum_PoppingPals_EEnemyTier();
	POPPINGPALS_API UEnum* Z_Construct_UEnum_PoppingPals_EStartDirection();
	UPackage* Z_Construct_UPackage__Script_PoppingPals();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStartDirection;
	static UEnum* EStartDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStartDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStartDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoppingPals_EStartDirection, (UObject*)Z_Construct_UPackage__Script_PoppingPals(), TEXT("EStartDirection"));
		}
		return Z_Registration_Info_UEnum_EStartDirection.OuterSingleton;
	}
	template<> POPPINGPALS_API UEnum* StaticEnum<EStartDirection>()
	{
		return EStartDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_PoppingPals_EStartDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enumerators[] = {
		{ "EStartDirection::LEFT", (int64)EStartDirection::LEFT },
		{ "EStartDirection::RIGHT", (int64)EStartDirection::RIGHT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LEFT.DisplayName", "LEFT" },
		{ "LEFT.Name", "EStartDirection::LEFT" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
		{ "RIGHT.DisplayName", "RIGHT" },
		{ "RIGHT.Name", "EStartDirection::RIGHT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoppingPals,
		nullptr,
		"EStartDirection",
		"EStartDirection",
		Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoppingPals_EStartDirection()
	{
		if (!Z_Registration_Info_UEnum_EStartDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStartDirection.InnerSingleton, Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStartDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBounceHeight;
	static UEnum* EBounceHeight_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBounceHeight.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBounceHeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoppingPals_EBounceHeight, (UObject*)Z_Construct_UPackage__Script_PoppingPals(), TEXT("EBounceHeight"));
		}
		return Z_Registration_Info_UEnum_EBounceHeight.OuterSingleton;
	}
	template<> POPPINGPALS_API UEnum* StaticEnum<EBounceHeight>()
	{
		return EBounceHeight_StaticEnum();
	}
	struct Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enumerators[] = {
		{ "EBounceHeight::HIGH", (int64)EBounceHeight::HIGH },
		{ "EBounceHeight::MIDHIGH", (int64)EBounceHeight::MIDHIGH },
		{ "EBounceHeight::MIDLOW", (int64)EBounceHeight::MIDLOW },
		{ "EBounceHeight::LOW", (int64)EBounceHeight::LOW },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HIGH.DisplayName", "HIGH" },
		{ "HIGH.Name", "EBounceHeight::HIGH" },
		{ "LOW.DisplayName", "LOW" },
		{ "LOW.Name", "EBounceHeight::LOW" },
		{ "MIDHIGH.DisplayName", "MIDHIGH" },
		{ "MIDHIGH.Name", "EBounceHeight::MIDHIGH" },
		{ "MIDLOW.DisplayName", "MIDLOW" },
		{ "MIDLOW.Name", "EBounceHeight::MIDLOW" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoppingPals,
		nullptr,
		"EBounceHeight",
		"EBounceHeight",
		Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoppingPals_EBounceHeight()
	{
		if (!Z_Registration_Info_UEnum_EBounceHeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBounceHeight.InnerSingleton, Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBounceHeight.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyTier;
	static UEnum* EEnemyTier_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyTier.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyTier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoppingPals_EEnemyTier, (UObject*)Z_Construct_UPackage__Script_PoppingPals(), TEXT("EEnemyTier"));
		}
		return Z_Registration_Info_UEnum_EEnemyTier.OuterSingleton;
	}
	template<> POPPINGPALS_API UEnum* StaticEnum<EEnemyTier>()
	{
		return EEnemyTier_StaticEnum();
	}
	struct Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::Enumerators[] = {
		{ "EEnemyTier::FOUR", (int64)EEnemyTier::FOUR },
		{ "EEnemyTier::THREE", (int64)EEnemyTier::THREE },
		{ "EEnemyTier::TWO", (int64)EEnemyTier::TWO },
		{ "EEnemyTier::ONE", (int64)EEnemyTier::ONE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FOUR.DisplayName", "FOUR" },
		{ "FOUR.Name", "EEnemyTier::FOUR" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
		{ "ONE.DisplayName", "ONE" },
		{ "ONE.Name", "EEnemyTier::ONE" },
		{ "THREE.DisplayName", "THREE" },
		{ "THREE.Name", "EEnemyTier::THREE" },
		{ "TWO.DisplayName", "TWO" },
		{ "TWO.Name", "EEnemyTier::TWO" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoppingPals,
		nullptr,
		"EEnemyTier",
		"EEnemyTier",
		Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoppingPals_EEnemyTier()
	{
		if (!Z_Registration_Info_UEnum_EEnemyTier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyTier.InnerSingleton, Z_Construct_UEnum_PoppingPals_EEnemyTier_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyTier.InnerSingleton;
	}
	DEFINE_FUNCTION(ABaseEnemy::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlappedComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_STRUCT(FVector,Z_Param_normalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_hitComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hitResult);
		P_NATIVE_END;
	}
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
		UClass* Class = ABaseEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ABaseEnemy::execOnHit },
			{ "OnOverlapBegin", &ABaseEnemy::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemy_OnHit_Statics
	{
		struct BaseEnemy_eventOnHit_Parms
		{
			UPrimitiveComponent* hitComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			FVector normalImpulse;
			FHitResult hitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_normalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp = { "hitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, hitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp_MetaData), Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp_MetaData), Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult_MetaData), Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_normalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use UFUNCTION to define a method that can be bound to a delegate or a timer\n" },
#endif
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use UFUNCTION to define a method that can be bound to a delegate or a timer" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::BaseEnemy_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::BaseEnemy_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics
	{
		struct BaseEnemy_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapBegin_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_overlappedComponent_MetaData), Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_overlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapBegin_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherComp_MetaData), Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapBegin_Parms, otherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseEnemy_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseEnemy_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData), Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::BaseEnemy_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::BaseEnemy_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ballCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ballCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ballMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ballMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_startDir_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startDir_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startDir;
		static const UECodeGen_Private::FIntPropertyParams NewProp_bounceHeight_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bounceHeight_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bounceHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forwardImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forwardImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_upwardImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_upwardImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStartImpulse_MetaData[];
#endif
		static void NewProp_bAllowStartImpulse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStartImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_OnHit, "OnHit" }, // 1984614905
		{ &Z_Construct_UFunction_ABaseEnemy_OnOverlapBegin, "OnOverlapBegin" }, // 3019899227
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/BaseEnemy.h" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballCollider_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballCollider = { "ballCollider", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, ballCollider), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballCollider_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballCollider_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh = { "ballMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, ballMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir = { "startDir", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, startDir), Z_Construct_UEnum_PoppingPals_EStartDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_MetaData) }; // 2084887355
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight = { "bounceHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, bounceHeight), Z_Construct_UEnum_PoppingPals_EBounceHeight, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_MetaData) }; // 3227446406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse = { "forwardImpulse", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, forwardImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_upwardImpulse_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_upwardImpulse = { "upwardImpulse", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, upwardImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_upwardImpulse_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_upwardImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bAllowStartImpulse_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bAllowStartImpulse_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bAllowStartImpulse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bAllowStartImpulse = { "bAllowStartImpulse", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bAllowStartImpulse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bAllowStartImpulse_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bAllowStartImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Enemies/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_damage_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_damage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_upwardImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bAllowStartImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
	}
	template<> POPPINGPALS_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
	ABaseEnemy::~ABaseEnemy() {}
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_Statics::EnumInfo[] = {
		{ EStartDirection_StaticEnum, TEXT("EStartDirection"), &Z_Registration_Info_UEnum_EStartDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2084887355U) },
		{ EBounceHeight_StaticEnum, TEXT("EBounceHeight"), &Z_Registration_Info_UEnum_EBounceHeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3227446406U) },
		{ EEnemyTier_StaticEnum, TEXT("EEnemyTier"), &Z_Registration_Info_UEnum_EEnemyTier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2565827202U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 3726802859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_2151871627(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_5_3_Source_PoppingPals_Enemies_BaseEnemy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
