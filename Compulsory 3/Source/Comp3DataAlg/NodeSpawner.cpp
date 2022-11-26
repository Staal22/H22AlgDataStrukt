// Fill out your copyright notice in the Description page of Project Settings.
#include "NodeSpawner.h"

// #include "Alg_Djikstra.h"
#include "NodeActor.h"
#include "Random.h"
#include "Components/SphereComponent.h"
#include "TSPHandler.h"
#include "AStarHadler.h"

// Sets default values
ANodeSpawner::ANodeSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SetRootComponent(Collision);
}

// Called when the game starts or when spawned
void ANodeSpawner::BeginPlay()
{
	Super::BeginPlay();

	
	ResetSpawner();
	SpawnInitialNodes();
}

// Called every frame
void ANodeSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANodeSpawner::SpawnInitialNodes()
{
	UWorld* World = GetWorld();
	const FVector Location = GetActorLocation();
	const FRotator Rotation = GetActorRotation();

	float XValue = 0.f;
	float YValue = 0.f;

	if(UsrDefNodeCount < 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UsrDefCount should be at least 2"));
		return;
	}
	
	for (int i = 0; i < UsrDefNodeCount; ++i)
	{
		std::uniform_int_distribution<> heightDist{-200, 200};
		const float ZValue = heightDist(gen64);
		
		Nodes.Emplace(World->SpawnActor<ANodeActor>(NodeToSpawn, FVector(Location.X + XValue, Location.Y + YValue, Location.Z + ZValue), Rotation));
		Nodes[i]->SetOwner(this);
		
		if (i == 0)
		{
			XValue += 100.f;
		}
		else if ((i + 1) % static_cast<int>(sqrt(UsrDefNodeCount)) != 0)
		{
			XValue += 100.f;
		}
		else
		{
			YValue += 100.f;
			XValue = 0.f;
		}
	}
	
	for (int i = 0; i < Nodes.Num(); ++i)
	{
		std::uniform_int_distribution<> ttfDist{0, 35};
		// Nodes[i]->SetTimeToFinish(ttfDist(gen64));
		
		if (Nodes.Num() - i == 1)
		{
			break;
		}
		std::uniform_int_distribution<> connectionsDist{1, 2};
		const int connections = connectionsDist(gen64);
		for (int j = 0; j < connections; ++j)
		{
			int connectTo{};
			if (i > Nodes.Num() - 4)
			{
				connectTo = i + 1;
			}
			else
			{
				std::uniform_int_distribution<> biggerDist{i+1, i+3};
				connectTo = biggerDist(gen64);
			}
			std::uniform_int_distribution<> distanceDist{1, 17};

			if (Nodes[i]->NodePaths.Num() > 0)
			{
				const ANodeActor* lastConnection = Nodes[i]->NodePaths[0].ConnectedNode;
				if (Nodes[connectTo] != lastConnection)
				{
					Nodes[i]->NodePaths.Emplace(FNodePath());
					Nodes[i]->NodePaths[j].ConnectedNode = Nodes[connectTo];
					Nodes[i]->NodePaths[j].distance = distanceDist(gen64);
				}
			}
			else
			{
				Nodes[i]->NodePaths.Emplace(FNodePath());
				Nodes[i]->NodePaths[j].ConnectedNode = Nodes[connectTo];
				Nodes[i]->NodePaths[j].distance = distanceDist(gen64);
			}
		}
	}

	
	// std::uniform_int_distribution<> startDist{0, Nodes.Num() - 1};
	// const int startIndex = startDist(gen64);
	//
	// std::uniform_int_distribution<> endDist{0, Nodes.Num() - 1};
	// int endIndex = endDist(gen64);
	// while (endIndex == startIndex)
	// {
	// 	endIndex = endDist(gen64);
	// }
	const int startIndex = 0;
	const int endIndex = Nodes.Num() - 1;
	
	Nodes[startIndex]->SetStart();
	Nodes[endIndex]->SetEnd();
	
	for (int i = 0; i < Nodes.Num(); ++i)
	{
		Nodes[i]->HeuristicFloatFromStart = Nodes[i]->GetDistanceTo(Nodes[endIndex]);
	}
	
}

void ANodeSpawner::ResetSpawner() {
	for (int i = 0; i < Nodes.Num(); ++i) {
		Nodes[i]->Destroy();
	}
	Nodes.Empty();
}

