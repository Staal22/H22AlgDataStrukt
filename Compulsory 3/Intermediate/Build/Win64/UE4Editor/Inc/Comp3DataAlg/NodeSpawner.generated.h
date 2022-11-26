// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMP3DATAALG_NodeSpawner_generated_h
#error "NodeSpawner.generated.h already included, missing '#pragma once' in NodeSpawner.h"
#endif
#define COMP3DATAALG_NodeSpawner_generated_h

#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_SPARSE_DATA
#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetSpawner); \
	DECLARE_FUNCTION(execSpawnInitialNodes);


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetSpawner); \
	DECLARE_FUNCTION(execSpawnInitialNodes);


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANodeSpawner(); \
	friend struct Z_Construct_UClass_ANodeSpawner_Statics; \
public: \
	DECLARE_CLASS(ANodeSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Comp3DataAlg"), NO_API) \
	DECLARE_SERIALIZER(ANodeSpawner)


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANodeSpawner(); \
	friend struct Z_Construct_UClass_ANodeSpawner_Statics; \
public: \
	DECLARE_CLASS(ANodeSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Comp3DataAlg"), NO_API) \
	DECLARE_SERIALIZER(ANodeSpawner)


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANodeSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANodeSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANodeSpawner(ANodeSpawner&&); \
	NO_API ANodeSpawner(const ANodeSpawner&); \
public:


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANodeSpawner(ANodeSpawner&&); \
	NO_API ANodeSpawner(const ANodeSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANodeSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANodeSpawner)


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UsrDefNodeCount() { return STRUCT_OFFSET(ANodeSpawner, UsrDefNodeCount); }


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_9_PROLOG
#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_SPARSE_DATA \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_RPC_WRAPPERS \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_INCLASS \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_SPARSE_DATA \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_INCLASS_NO_PURE_DECLS \
	Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMP3DATAALG_API UClass* StaticClass<class ANodeSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Compulsory_3_Source_Comp3DataAlg_NodeSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
