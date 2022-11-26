// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comp3DataAlg/TSPHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTSPHandler() {}
// Cross Module References
	COMP3DATAALG_API UScriptStruct* Z_Construct_UScriptStruct_FACOAntResult();
	UPackage* Z_Construct_UPackage__Script_Comp3DataAlg();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ATSPHandler_NoRegister();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ATSPHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ANodeSpawner_NoRegister();
// End Cross Module References
class UScriptStruct* FACOAntResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMP3DATAALG_API uint32 Get_Z_Construct_UScriptStruct_FACOAntResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FACOAntResult, Z_Construct_UPackage__Script_Comp3DataAlg(), TEXT("ACOAntResult"), sizeof(FACOAntResult), Get_Z_Construct_UScriptStruct_FACOAntResult_Hash());
	}
	return Singleton;
}
template<> COMP3DATAALG_API UScriptStruct* StaticStruct<FACOAntResult>()
{
	return FACOAntResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FACOAntResult(FACOAntResult::StaticStruct, TEXT("/Script/Comp3DataAlg"), TEXT("ACOAntResult"), false, nullptr, nullptr);
static struct FScriptStruct_Comp3DataAlg_StaticRegisterNativesFACOAntResult
{
	FScriptStruct_Comp3DataAlg_StaticRegisterNativesFACOAntResult()
	{
		UScriptStruct::DeferCppStructOps<FACOAntResult>(FName(TEXT("ACOAntResult")));
	}
} ScriptStruct_Comp3DataAlg_StaticRegisterNativesFACOAntResult;
	struct Z_Construct_UScriptStruct_FACOAntResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FACOAntResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "TSPHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FACOAntResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FACOAntResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FACOAntResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Comp3DataAlg,
		nullptr,
		&NewStructOps,
		"ACOAntResult",
		sizeof(FACOAntResult),
		alignof(FACOAntResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FACOAntResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FACOAntResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FACOAntResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FACOAntResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Comp3DataAlg();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ACOAntResult"), sizeof(FACOAntResult), Get_Z_Construct_UScriptStruct_FACOAntResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FACOAntResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FACOAntResult_Hash() { return 2607276384U; }
	DEFINE_FUNCTION(ATSPHandler::execHandleNearestNeighbour)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleNearestNeighbour();
		P_NATIVE_END;
	}
	static FName NAME_ATSPHandler_FoundTotalDistanceEvent = FName(TEXT("FoundTotalDistanceEvent"));
	void ATSPHandler::FoundTotalDistanceEvent(float distance)
	{
		TSPHandler_eventFoundTotalDistanceEvent_Parms Parms;
		Parms.distance=distance;
		ProcessEvent(FindFunctionChecked(NAME_ATSPHandler_FoundTotalDistanceEvent),&Parms);
	}
	void ATSPHandler::StaticRegisterNativesATSPHandler()
	{
		UClass* Class = ATSPHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleNearestNeighbour", &ATSPHandler::execHandleNearestNeighbour },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TSPHandler_eventFoundTotalDistanceEvent_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TSPHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATSPHandler, nullptr, "FoundTotalDistanceEvent", nullptr, nullptr, sizeof(TSPHandler_eventFoundTotalDistanceEvent_Parms), Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Nearest neighbour\n// funcs\n" },
		{ "ModuleRelativePath", "TSPHandler.h" },
		{ "ToolTip", "Nearest neighbour\nfuncs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATSPHandler, nullptr, "HandleNearestNeighbour", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATSPHandler_NoRegister()
	{
		return ATSPHandler::StaticClass();
	}
	struct Z_Construct_UClass_ATSPHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nodeSpawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATSPHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Comp3DataAlg,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATSPHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATSPHandler_FoundTotalDistanceEvent, "FoundTotalDistanceEvent" }, // 3838940239
		{ &Z_Construct_UFunction_ATSPHandler_HandleNearestNeighbour, "HandleNearestNeighbour" }, // 3144345371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATSPHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TSPHandler.h" },
		{ "ModuleRelativePath", "TSPHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATSPHandler_Statics::NewProp_nodeSpawner_MetaData[] = {
		{ "Category", "TSPHandler" },
		{ "ModuleRelativePath", "TSPHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATSPHandler_Statics::NewProp_nodeSpawner = { "nodeSpawner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATSPHandler, nodeSpawner), Z_Construct_UClass_ANodeSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATSPHandler_Statics::NewProp_nodeSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATSPHandler_Statics::NewProp_nodeSpawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATSPHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATSPHandler_Statics::NewProp_nodeSpawner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATSPHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATSPHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATSPHandler_Statics::ClassParams = {
		&ATSPHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATSPHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATSPHandler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATSPHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATSPHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATSPHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATSPHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATSPHandler, 3301852213);
	template<> COMP3DATAALG_API UClass* StaticClass<ATSPHandler>()
	{
		return ATSPHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATSPHandler(Z_Construct_UClass_ATSPHandler, &ATSPHandler::StaticClass, TEXT("/Script/Comp3DataAlg"), TEXT("ATSPHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATSPHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
