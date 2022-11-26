// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comp3DataAlg/NodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeSpawner() {}
// Cross Module References
	COMP3DATAALG_API UClass* Z_Construct_UClass_ANodeSpawner_NoRegister();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ANodeSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Comp3DataAlg();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANodeSpawner::execResetSpawner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSpawner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANodeSpawner::execSpawnInitialNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnInitialNodes();
		P_NATIVE_END;
	}
	void ANodeSpawner::StaticRegisterNativesANodeSpawner()
	{
		UClass* Class = ANodeSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetSpawner", &ANodeSpawner::execResetSpawner },
			{ "SpawnInitialNodes", &ANodeSpawner::execSpawnInitialNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANodeSpawner_ResetSpawner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANodeSpawner_ResetSpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NodeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANodeSpawner_ResetSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANodeSpawner, nullptr, "ResetSpawner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANodeSpawner_ResetSpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeSpawner_ResetSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANodeSpawner_ResetSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANodeSpawner_ResetSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NodeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANodeSpawner, nullptr, "SpawnInitialNodes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANodeSpawner_NoRegister()
	{
		return ANodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ANodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NodeToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsrDefNodeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UsrDefNodeCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Comp3DataAlg,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANodeSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANodeSpawner_ResetSpawner, "ResetSpawner" }, // 1261895811
		{ &Z_Construct_UFunction_ANodeSpawner_SpawnInitialNodes, "SpawnInitialNodes" }, // 4087808644
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NodeSpawner.h" },
		{ "ModuleRelativePath", "NodeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeSpawner_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "NodeSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NodeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANodeSpawner_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeSpawner, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANodeSpawner_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeSpawner_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeSpawner_Statics::NewProp_NodeToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NodeSpawner" },
		{ "ModuleRelativePath", "NodeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANodeSpawner_Statics::NewProp_NodeToSpawn = { "NodeToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeSpawner, NodeToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANodeSpawner_Statics::NewProp_NodeToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeSpawner_Statics::NewProp_NodeToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeSpawner_Statics::NewProp_UsrDefNodeCount_MetaData[] = {
		{ "Category", "NodeSpawner" },
		{ "ModuleRelativePath", "NodeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANodeSpawner_Statics::NewProp_UsrDefNodeCount = { "UsrDefNodeCount", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeSpawner, UsrDefNodeCount), METADATA_PARAMS(Z_Construct_UClass_ANodeSpawner_Statics::NewProp_UsrDefNodeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeSpawner_Statics::NewProp_UsrDefNodeCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANodeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeSpawner_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeSpawner_Statics::NewProp_NodeToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeSpawner_Statics::NewProp_UsrDefNodeCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANodeSpawner_Statics::ClassParams = {
		&ANodeSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANodeSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANodeSpawner, 1504806667);
	template<> COMP3DATAALG_API UClass* StaticClass<ANodeSpawner>()
	{
		return ANodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANodeSpawner(Z_Construct_UClass_ANodeSpawner, &ANodeSpawner::StaticClass, TEXT("/Script/Comp3DataAlg"), TEXT("ANodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
