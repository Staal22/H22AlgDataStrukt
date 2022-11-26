// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TSPHandler.generated.h"


class TSPEdge {
public:
	class ANodeActor* first{};
	class ANodeActor* second{};
	float distance{};
	float pheromones{};

	TSPEdge();
	~TSPEdge();

	
	ANodeActor* GetOther(ANodeActor* current);

	bool IsSameEdge(TSPEdge* edge);

};

USTRUCT()
struct FACOAntResult {
	GENERATED_BODY()
public:
	FACOAntResult();

	// copy contructor
	FACOAntResult(const FACOAntResult& oldObj);
	
	float totalDistance{};
	TArray<TSPEdge*> edgesWalked{};
};
UCLASS()
class COMP3DATAALG_API ATSPHandler : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATSPHandler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// not boilerplate section
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ANodeSpawner* nodeSpawner{};
	TArray<class ANodeActor*> nodesToDraw{};

	TArray<class TSPEdge*> edgesToDraw{};

	// Nearest neighbour
	// funcs
	UFUNCTION(BlueprintCallable)
	void HandleNearestNeighbour();

	void HandleACO();
	FACOAntResult TraveseGraphOnce(TArray<ANodeActor*> nodes, ANodeActor* startNode);

	void SetAllNodesPathsToAllOtherNodes(TArray<ANodeActor*>& list);
	
	UFUNCTION(BlueprintImplementableEvent)
	void FoundTotalDistanceEvent(float distance);
};
