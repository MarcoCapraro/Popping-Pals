// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoppingPals/BaseEnemy.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	POPPINGPALS_API UClass* Z_Construct_UClass_ABaseEnemy();
	POPPINGPALS_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	POPPINGPALS_API UEnum* Z_Construct_UEnum_PoppingPals_EBounceHeight();
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
		{ "ModuleRelativePath", "BaseEnemy.h" },
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
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EStartDirection_Statics::Enum_MetaDataParams))
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
		{ "EBounceHeight::MID", (int64)EBounceHeight::MID },
		{ "EBounceHeight::LOW", (int64)EBounceHeight::LOW },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HIGH.DisplayName", "HIGH" },
		{ "HIGH.Name", "EBounceHeight::HIGH" },
		{ "LOW.DisplayName", "LOW" },
		{ "LOW.Name", "EBounceHeight::LOW" },
		{ "MID.DisplayName", "MID" },
		{ "MID.Name", "EBounceHeight::MID" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoppingPals,
		nullptr,
		"EBounceHeight",
		"EBounceHeight",
		Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoppingPals_EBounceHeight()
	{
		if (!Z_Registration_Info_UEnum_EBounceHeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBounceHeight.InnerSingleton, Z_Construct_UEnum_PoppingPals_EBounceHeight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBounceHeight.InnerSingleton;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp = { "hitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, hitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_normalImpulse = { "normalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, normalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BaseEnemy_eventOnHit_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_normalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::NewProp_hitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Use UFUNCTION to define a method that can be bound to a delegate or a timer\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Use UFUNCTION to define a method that can be bound to a delegate or a timer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::BaseEnemy_eventOnHit_Parms), Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnHit_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ballMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ballMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forwardImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forwardImpulse;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_startDir_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startDir_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startDir;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bounceHeight_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bounceHeight_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_bounceHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PoppingPals,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_OnHit, "OnHit" }, // 2834388821
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh = { "ballMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, ballMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse = { "forwardImpulse", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, forwardImpulse), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir = { "startDir", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, startDir), Z_Construct_UEnum_PoppingPals_EStartDirection, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_MetaData)) }; // 3203482481
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight = { "bounceHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseEnemy, bounceHeight), Z_Construct_UEnum_PoppingPals_EBounceHeight, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_MetaData)) }; // 3414144746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ballMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_forwardImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_startDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bounceHeight,
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
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
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
	struct Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_Statics::EnumInfo[] = {
		{ EStartDirection_StaticEnum, TEXT("EStartDirection"), &Z_Registration_Info_UEnum_EStartDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3203482481U) },
		{ EBounceHeight_StaticEnum, TEXT("EBounceHeight"), &Z_Registration_Info_UEnum_EBounceHeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3414144746U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 3337677691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_1255037813(TEXT("/Script/PoppingPals"),
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
