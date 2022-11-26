// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NodeActor.h"
#include "GameFramework/Actor.h"
#include "AStarHandler2.generated.h"

UCLASS()
class COMP3DATAALG_API AAStarHandler2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAStarHandler2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ANodeSpawner* nodeSpawner{};
	
	void FindShortestPath();


private:
	void ExplorePaths(class ANodeActor*);
	void ReverseExplore(ANodeActor*);

	struct compareNodes
	{
		bool operator()(const ANodeActor& A, const ANodeActor& B) const
		{
			return A.DistanceFromStart < B.DistanceFromStart;
		}
	};
	
	UPROPERTY()
	TArray<ANodeActor*> UnVisitedNodes;
	
};
