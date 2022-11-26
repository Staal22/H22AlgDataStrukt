// Fill out your copyright notice in the Description page of Project Settings.


#include "AStarHandler2.h"
#include "DjikstraHandler.h"

// Sets default values
AAStarHandler2::AAStarHandler2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAStarHandler2::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle, this, &AAStarHandler2::FindShortestPath, 0.3f, false);
}

// Called every frame
void AAStarHandler2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAStarHandler2::FindShortestPath()
{
	for (int i = 0; i < nodeSpawner->Nodes.Num(); ++i)
	{
		UnVisitedNodes.HeapPush(nodeSpawner->Nodes[i], compareNodes());
	}
	ExplorePaths(UnVisitedNodes.HeapTop());
}

void AAStarHandler2::ExplorePaths(ANodeActor* Node)
{
	if (!Node->bVisited)
	{
		Node->bVisited = true;
		if (Node->isEnd == true)
		{
			ReverseExplore(Node);
			return;
		}
		for (int i = 0; i < Node->NodePaths.Num(); ++i)
		{
			FString s = "Visiting node " + Node->NodePaths[i].ConnectedNode->GetName() + " with distance from start ";
			s.AppendInt(Node->NodePaths[i].ConnectedNode->DistanceFromStart);
			s.Append(", coming from " + Node->GetName() + " whose comparative distance from start is: ");
			s.AppendInt(Node->DistanceFromStart + Node->NodePaths[i].distance);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *s );
			if (Node->DistanceFromStart + Node->NodePaths[i].distance + Node->HeuristicFloatFromStart < Node->NodePaths[i].ConnectedNode->DistanceFromStart)
			{
				Node->NodePaths[i].ConnectedNode->DistanceFromStart = Node->DistanceFromStart + Node->NodePaths[i].distance;
				Node->NodePaths[i].ConnectedNode->PrevInPath = Node;
			}
		}
	
		UnVisitedNodes.RemoveAt(0);
		UnVisitedNodes.Heapify(compareNodes());
	
		FString s = "The top of the heap is now " + UnVisitedNodes.HeapTop()->GetName();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *s );
		ExplorePaths(UnVisitedNodes.HeapTop());
	}
}

void AAStarHandler2::ReverseExplore(ANodeActor* Node)
{
	if (Node->PrevInPath != nullptr)
	{
		for (int i = 0; i < Node->PrevInPath->NodePaths.Num(); ++i)
		{
			if (Node->PrevInPath->NodePaths[i].ConnectedNode == Node)
			{
				Node->PrevInPath->NodePaths[i].shortestPath = true;
				break;
			}
		}
		ReverseExplore(Node->PrevInPath);
	}
}

