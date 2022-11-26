// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMP3DATAALG_TSPHandler_generated_h
#error "TSPHandler.generated.h already included, missing '#pragma once' in TSPHandler.h"
#endif
#define COMP3DATAALG_TSPHandler_generated_h

#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FACOAntResult_Statics; \
	COMP3DATAALG_API static class UScriptStruct* StaticStruct();


template<> COMP3DATAALG_API UScriptStruct* StaticStruct<struct FACOAntResult>();

#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_SPARSE_DATA
#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleNearestNeighbour);


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleNearestNeighbour);


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_EVENT_PARMS \
	struct TSPHandler_eventFoundTotalDistanceEvent_Parms \
	{ \
		float distance; \
	};


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_CALLBACK_WRAPPERS
#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATSPHandler(); \
	friend struct Z_Construct_UClass_ATSPHandler_Statics; \
public: \
	DECLARE_CLASS(ATSPHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Comp3DataAlg"), NO_API) \
	DECLARE_SERIALIZER(ATSPHandler)


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_INCLASS \
private: \
	static void StaticRegisterNativesATSPHandler(); \
	friend struct Z_Construct_UClass_ATSPHandler_Statics; \
public: \
	DECLARE_CLASS(ATSPHandler, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Comp3DataAlg"), NO_API) \
	DECLARE_SERIALIZER(ATSPHandler)


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATSPHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATSPHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATSPHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATSPHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATSPHandler(ATSPHandler&&); \
	NO_API ATSPHandler(const ATSPHandler&); \
public:


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATSPHandler(ATSPHandler&&); \
	NO_API ATSPHandler(const ATSPHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATSPHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATSPHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATSPHandler)


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_PRIVATE_PROPERTY_OFFSET
#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_39_PROLOG \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_EVENT_PARMS


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_PRIVATE_PROPERTY_OFFSET \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_SPARSE_DATA \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_RPC_WRAPPERS \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_CALLBACK_WRAPPERS \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_INCLASS \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_PRIVATE_PROPERTY_OFFSET \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_SPARSE_DATA \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_CALLBACK_WRAPPERS \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_INCLASS_NO_PURE_DECLS \
	Compulsory_3_Source_Comp3DataAlg_TSPHandler_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMP3DATAALG_API UClass* StaticClass<class ATSPHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Compulsory_3_Source_Comp3DataAlg_TSPHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
