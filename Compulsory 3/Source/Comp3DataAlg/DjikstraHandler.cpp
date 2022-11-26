// Fill out your copyright notice in the Description page of Project Settings.


#include "DjikstraHandler.h"
#include <string>
#include "NodeActor.h"
#include "TSPHandler.h"

// Sets default values
ADjikstraHandler::ADjikstraHandler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADjikstraHandler::BeginPlay()
{
	Super::BeginPlay();
	
	
	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle, this, &ADjikstraHandler::FindShortestPath, 0.3f, false);
}

// Called every frame
void ADjikstraHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADjikstraHandler::FindShortestPath()
{
	for (int i = 0; i < nodeSpawner->Nodes.Num(); ++i)
	{
		UnVisitedNodes.HeapPush(nodeSpawner->Nodes[i], compareNodes());
	}
	ExplorePaths(UnVisitedNodes.HeapTop());
}

void ADjikstraHandler::ExplorePaths(ANodeActor* Node)
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
			if (Node->DistanceFromStart + Node->NodePaths[i].distance < Node->NodePaths[i].ConnectedNode->DistanceFromStart)
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

void ADjikstraHandler::ReverseExplore(ANodeActor* Node)
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
