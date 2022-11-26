// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comp3DataAlg/AStarHandler2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAStarHandler2() {}
// Cross Module References
	COMP3DATAALG_API UClass* Z_Construct_UClass_AAStarHandler2_NoRegister();
	COMP3DATAALG_API UClass* Z_Construct_UClass_AAStarHandler2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Comp3DataAlg();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ANodeSpawner_NoRegister();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ANodeActor_NoRegister();
// End Cross Module References
	void AAStarHandler2::StaticRegisterNativesAAStarHandler2()
	{
	}
	UClass* Z_Construct_UClass_AAStarHandler2_NoRegister()
	{
		return AAStarHandler2::StaticClass();
	}
	struct Z_Construct_UClass_AAStarHandler2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nodeSpawner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnVisitedNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnVisitedNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnVisitedNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAStarHandler2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Comp3DataAlg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarHandler2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AStarHandler2.h" },
		{ "ModuleRelativePath", "AStarHandler2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarHandler2_Statics::NewProp_nodeSpawner_MetaData[] = {
		{ "Category", "AStarHandler2" },
		{ "ModuleRelativePath", "AStarHandler2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarHandler2_Statics::NewProp_nodeSpawner = { "nodeSpawner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarHandler2, nodeSpawner), Z_Construct_UClass_ANodeSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAStarHandler2_Statics::NewProp_nodeSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarHandler2_Statics::NewProp_nodeSpawner_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAStarHandler2_Statics::NewProp_UnVisitedNodes_Inner = { "UnVisitedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANodeActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAStarHandler2_Statics::NewProp_UnVisitedNodes_MetaData[] = {
		{ "ModuleRelativePath", "AStarHandler2.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAStarHandler2_Statics::NewProp_UnVisitedNodes = { "UnVisitedNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAStarHandler2, UnVisitedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAStarHandler2_Statics::NewProp_UnVisitedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarHandler2_Statics::NewProp_UnVisitedNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAStarHandler2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarHandler2_Statics::NewProp_nodeSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarHandler2_Statics::NewProp_UnVisitedNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAStarHandler2_Statics::NewProp_UnVisitedNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAStarHandler2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAStarHandler2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAStarHandler2_Statics::ClassParams = {
		&AAStarHandler2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAStarHandler2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAStarHandler2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAStarHandler2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAStarHandler2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAStarHandler2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAStarHandler2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAStarHandler2, 2700659768);
	template<> COMP3DATAALG_API UClass* StaticClass<AAStarHandler2>()
	{
		return AAStarHandler2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAStarHandler2(Z_Construct_UClass_AAStarHandler2, &AAStarHandler2::StaticClass, TEXT("/Script/Comp3DataAlg"), TEXT("AAStarHandler2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAStarHandler2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
