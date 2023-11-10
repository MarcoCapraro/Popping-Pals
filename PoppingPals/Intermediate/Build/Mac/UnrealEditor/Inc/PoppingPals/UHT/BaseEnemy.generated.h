// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef POPPINGPALS_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define POPPINGPALS_BaseEnemy_generated_h

#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_SPARSE_DATA
#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_ACCESSORS
#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PoppingPals"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PoppingPals"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	NO_API virtual ~ABaseEnemy();


#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy) \
	NO_API virtual ~ABaseEnemy();


#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_34_PROLOG
#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_SPARSE_DATA \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_RPC_WRAPPERS \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_ACCESSORS \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_INCLASS \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_SPARSE_DATA \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_ACCESSORS \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_INCLASS_NO_PURE_DECLS \
	FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POPPINGPALS_API UClass* StaticClass<class ABaseEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_marco_capraro_Documents_GitHub_Popping_Pals_PoppingPals_Source_PoppingPals_BaseEnemy_h


#define FOREACH_ENUM_ESTARTDIRECTION(op) \
	op(EStartDirection::LEFT) \
	op(EStartDirection::RIGHT) 

enum class EStartDirection;
template<> struct TIsUEnumClass<EStartDirection> { enum { Value = true }; };
template<> POPPINGPALS_API UEnum* StaticEnum<EStartDirection>();

#define FOREACH_ENUM_EBOUNCEHEIGHT(op) \
	op(EBounceHeight::HIGH) \
	op(EBounceHeight::MIDHIGH) \
	op(EBounceHeight::MIDLOW) \
	op(EBounceHeight::LOW) 

enum class EBounceHeight;
template<> struct TIsUEnumClass<EBounceHeight> { enum { Value = true }; };
template<> POPPINGPALS_API UEnum* StaticEnum<EBounceHeight>();

#define FOREACH_ENUM_EENEMYTIER(op) \
	op(EEnemyTier::FOUR) \
	op(EEnemyTier::THREE) \
	op(EEnemyTier::TWO) \
	op(EEnemyTier::ONE) 

enum class EEnemyTier;
template<> struct TIsUEnumClass<EEnemyTier> { enum { Value = true }; };
template<> POPPINGPALS_API UEnum* StaticEnum<EEnemyTier>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
