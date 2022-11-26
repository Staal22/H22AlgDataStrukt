// Fill out your copyright notice in the Description page of Project Settings.
#include "NodeActor.h"

#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"

// Sets default values
ANodeActor::ANodeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SetRootComponent(Sphere);

	NodeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NodeMesh"));
	NodeMesh->SetupAttachment(GetRootComponent());

	StartMaterial = CreateDefaultSubobject<UMaterial>(TEXT("StartMaterial"));
	EndMaterial = CreateDefaultSubobject<UMaterial>(TEXT("EndMaterial"));
}

// Called when the game starts or when spawned
void ANodeActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANodeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto World = GetWorld();
	
	for (int i = 0; i < NodePaths.Num(); ++i)
	{
		if (NodePaths[i].shortestPath == true)
		{
			DrawDebugLine(World, GetActorTransform().GetLocation(), NodePaths[i].ConnectedNode->GetActorTransform().GetLocation(), FColor(255, 255, 255));

		}
		else
		{
			DrawDebugLine(World, GetActorTransform().GetLocation(), NodePaths[i].ConnectedNode->GetActorTransform().GetLocation(), FColor(0, 0, 0));
		}
	}
}

void ANodeActor::SetStart()
{
	isStart = true;
	DistanceFromStart = 0;
	NodeMesh->SetMaterial(0, StartMaterial);
}

void ANodeActor::SetEnd()
{
	isEnd = true;
	NodeMesh->SetMaterial(0, EndMaterial);
}

// void ANodeActor::SetTimeToFinish(int ttf)
// {
// 	TimeToFinish = ttf;
// }

bool ANodeActor::HasEdge(TSPEdge* edge) {
	for (int i = 0; i < tspEdges.Num(); ++i) {
		if (tspEdges[i]->IsSameEdge(edge)) {
			return true;
		}
	}

	return false;
}

