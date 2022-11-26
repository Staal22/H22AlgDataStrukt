// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comp3DataAlg/NodeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeActor() {}
// Cross Module References
	COMP3DATAALG_API UScriptStruct* Z_Construct_UScriptStruct_FNodePath();
	UPackage* Z_Construct_UPackage__Script_Comp3DataAlg();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ANodeActor_NoRegister();
	COMP3DATAALG_API UClass* Z_Construct_UClass_ANodeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FNodePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMP3DATAALG_API uint32 Get_Z_Construct_UScriptStruct_FNodePath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodePath, Z_Construct_UPackage__Script_Comp3DataAlg(), TEXT("NodePath"), sizeof(FNodePath), Get_Z_Construct_UScriptStruct_FNodePath_Hash());
	}
	return Singleton;
}
template<> COMP3DATAALG_API UScriptStruct* StaticStruct<FNodePath>()
{
	return FNodePath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodePath(FNodePath::StaticStruct, TEXT("/Script/Comp3DataAlg"), TEXT("NodePath"), false, nullptr, nullptr);
static struct FScriptStruct_Comp3DataAlg_StaticRegisterNativesFNodePath
{
	FScriptStruct_Comp3DataAlg_StaticRegisterNativesFNodePath()
	{
		UScriptStruct::DeferCppStructOps<FNodePath>(FName(TEXT("NodePath")));
	}
} ScriptStruct_Comp3DataAlg_StaticRegisterNativesFNodePath;
	struct Z_Construct_UScriptStruct_FNodePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shortestPath_MetaData[];
#endif
		static void NewProp_shortestPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shortestPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodePath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodePath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodePath>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_ConnectedNode_MetaData[] = {
		{ "Category", "NodePath" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_ConnectedNode = { "ConnectedNode", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodePath, ConnectedNode), Z_Construct_UClass_ANodeActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_ConnectedNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_ConnectedNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "NodePath" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodePath, distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_shortestPath_MetaData[] = {
		{ "Category", "NodePath" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_shortestPath_SetBit(void* Obj)
	{
		((FNodePath*)Obj)->shortestPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_shortestPath = { "shortestPath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNodePath), &Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_shortestPath_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_shortestPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_shortestPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_ConnectedNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodePath_Statics::NewProp_shortestPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodePath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Comp3DataAlg,
		nullptr,
		&NewStructOps,
		"NodePath",
		sizeof(FNodePath),
		alignof(FNodePath),
		Z_Construct_UScriptStruct_FNodePath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodePath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodePath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodePath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodePath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Comp3DataAlg();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodePath"), sizeof(FNodePath), Get_Z_Construct_UScriptStruct_FNodePath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodePath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodePath_Hash() { return 956963753U; }
	void ANodeActor::StaticRegisterNativesANodeActor()
	{
	}
	UClass* Z_Construct_UClass_ANodeActor_NoRegister()
	{
		return ANodeActor::StaticClass();
	}
	struct Z_Construct_UClass_ANodeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodePaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevInPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrevInPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStart_MetaData[];
#endif
		static void NewProp_isStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEnd_MetaData[];
#endif
		static void NewProp_isEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TimeToFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DistanceFromStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisited_MetaData[];
#endif
		static void NewProp_bVisited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pheromones_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pheromones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeuristicFloatFromStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeuristicFloatFromStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_f_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_f;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANodeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Comp3DataAlg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NodeActor.h" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "Comment", "// void SetTimeToFinish(int ttf);\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NodeActor.h" },
		{ "ToolTip", "void SetTimeToFinish(int ttf);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_NodeMesh_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_NodeMesh = { "NodeMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, NodeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_NodeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_NodeMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_NodePaths_Inner = { "NodePaths", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNodePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_NodePaths_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "Comment", "// UPROPERTY(VisibleAnywhere)\n// TArray<ANodeActor*> ConnectedNodes;\n" },
		{ "ModuleRelativePath", "NodeActor.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere)\nTArray<ANodeActor*> ConnectedNodes;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_NodePaths = { "NodePaths", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, NodePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_NodePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_NodePaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_PrevInPath_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_PrevInPath = { "PrevInPath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, PrevInPath), Z_Construct_UClass_ANodeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_PrevInPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_PrevInPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_isStart_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "Comment", "// TWeakObjectPtr<ANodeSpawner> NodeSpawner;\n" },
		{ "ModuleRelativePath", "NodeActor.h" },
		{ "ToolTip", "TWeakObjectPtr<ANodeSpawner> NodeSpawner;" },
	};
#endif
	void Z_Construct_UClass_ANodeActor_Statics::NewProp_isStart_SetBit(void* Obj)
	{
		((ANodeActor*)Obj)->isStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_isStart = { "isStart", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANodeActor), &Z_Construct_UClass_ANodeActor_Statics::NewProp_isStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_isStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_isStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_isEnd_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	void Z_Construct_UClass_ANodeActor_Statics::NewProp_isEnd_SetBit(void* Obj)
	{
		((ANodeActor*)Obj)->isEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_isEnd = { "isEnd", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANodeActor), &Z_Construct_UClass_ANodeActor_Statics::NewProp_isEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_isEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_isEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_TimeToFinish_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_TimeToFinish = { "TimeToFinish", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, TimeToFinish), METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_TimeToFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_TimeToFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_DistanceFromStart_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_DistanceFromStart = { "DistanceFromStart", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, DistanceFromStart), METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_DistanceFromStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_DistanceFromStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_bVisited_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	void Z_Construct_UClass_ANodeActor_Statics::NewProp_bVisited_SetBit(void* Obj)
	{
		((ANodeActor*)Obj)->bVisited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_bVisited = { "bVisited", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANodeActor), &Z_Construct_UClass_ANodeActor_Statics::NewProp_bVisited_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_bVisited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_bVisited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_pheromones_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "Comment", "// for TSP Ant Colony Optimiazation\n" },
		{ "ModuleRelativePath", "NodeActor.h" },
		{ "ToolTip", "for TSP Ant Colony Optimiazation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_pheromones = { "pheromones", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, pheromones), METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_pheromones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_pheromones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_HeuristicFloatFromStart_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_HeuristicFloatFromStart = { "HeuristicFloatFromStart", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, HeuristicFloatFromStart), METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_HeuristicFloatFromStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_HeuristicFloatFromStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_StartMaterial_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_StartMaterial = { "StartMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, StartMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_StartMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_StartMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_EndMaterial_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_EndMaterial = { "EndMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, EndMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_EndMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_EndMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANodeActor_Statics::NewProp_f_MetaData[] = {
		{ "Category", "NodeActor" },
		{ "ModuleRelativePath", "NodeActor.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ANodeActor_Statics::NewProp_f = { "f", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANodeActor, f), METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::NewProp_f_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::NewProp_f_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANodeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_Sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_NodeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_NodePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_NodePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_PrevInPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_isStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_isEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_TimeToFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_DistanceFromStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_bVisited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_pheromones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_HeuristicFloatFromStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_StartMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_EndMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANodeActor_Statics::NewProp_f,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANodeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANodeActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANodeActor_Statics::ClassParams = {
		&ANodeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANodeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANodeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANodeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANodeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANodeActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANodeActor, 214468215);
	template<> COMP3DATAALG_API UClass* StaticClass<ANodeActor>()
	{
		return ANodeActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANodeActor(Z_Construct_UClass_ANodeActor, &ANodeActor::StaticClass, TEXT("/Script/Comp3DataAlg"), TEXT("ANodeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANodeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
