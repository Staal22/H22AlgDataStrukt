// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NodeSpawner.h"
#include "TSPHandler.h"
#include "GameFramework/Actor.h"
#include "NodeActor.generated.h"

USTRUCT()
struct FNodePath {
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	ANodeActor* ConnectedNode;

	UPROPERTY(VisibleAnywhere)
	int distance;

	UPROPERTY(VisibleAnywhere)
	bool shortestPath = false;

	float pheromones{};
};

UCLASS()
class COMP3DATAALG_API ANodeActor : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANodeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// void SetOwner(ANodeSpawner* InSpawner)
	// {
	// 	NodeSpawner = InSpawner;
	// }

public:
	void SetStart();

	void SetEnd();

	// void SetTimeToFinish(int ttf);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* Sphere = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* NodeMesh = nullptr;

	// UPROPERTY(VisibleAnywhere)
	// TArray<ANodeActor*> ConnectedNodes;

	UPROPERTY(VisibleAnywhere)
	TArray<FNodePath> NodePaths;

	UPROPERTY(VisibleAnywhere)
	ANodeActor* PrevInPath = nullptr;

	// TWeakObjectPtr<ANodeSpawner> NodeSpawner;

	UPROPERTY(VisibleAnywhere)
	bool isStart = false;

	UPROPERTY(VisibleAnywhere)
	bool isEnd = false;

	 UPROPERTY(VisibleAnywhere)
	 int TimeToFinish{};

	UPROPERTY(VisibleAnywhere)
	int DistanceFromStart = INT_MAX - 2000;

	UPROPERTY(VisibleAnywhere)
	bool bVisited = false;

	// bool operator>(const ANodeActor& Other) const
	// {
	// 	return DistanceFromStart > Other.DistanceFromStart;
	// }
	// bool operator<(const ANodeActor& Other) const
	// {
	// 	return DistanceFromStart < Other.DistanceFromStart;
	// }

	// for TSP Ant Colony Optimiazation
	UPROPERTY(VisibleAnywhere)
	float pheromones = 0;

	TArray<class TSPEdge*> tspEdges{};

	bool HasEdge(TSPEdge* edge);

	UPROPERTY(VisibleAnywhere)
	float HeuristicFloatFromStart{};

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterial* StartMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterial* EndMaterial;


public:
	UPROPERTY(VisibleAnywhere)
		double f{ INT_MAX };
	


	/*UPROPERTY(VisibleAnywhere)
	double g{ -1 };
	UPROPERTY(VisibleAnywhere)
	double h{ -1 };;*/

};
