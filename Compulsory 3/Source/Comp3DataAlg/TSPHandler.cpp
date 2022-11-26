// Fill out your copyright notice in the Description page of Project Settings.


#include "TSPHandler.h"

#include <queue>
#include "DebugLog.h"
#include "DrawDebugHelpers.h"

#include "NodeActor.h"

TSPEdge::TSPEdge() {
}

TSPEdge::~TSPEdge() {
}

ANodeActor* TSPEdge::GetOther(ANodeActor* current) {
	if (current == first) {
		return second;
	}
	if (current == second) {
		return first;
	}

	return nullptr;
}

bool TSPEdge::IsSameEdge(TSPEdge* edge) {
	if (edge->first == first && edge->second == second) {
		return true;
	}
	if (edge->first == second && edge->second == first) {
		return true;
	}
	return false;
}

FACOAntResult::FACOAntResult() {
}

FACOAntResult::FACOAntResult(const FACOAntResult& oldObj) {
	totalDistance = oldObj.totalDistance;
	edgesWalked = oldObj.edgesWalked;
}

// Sets default values
ATSPHandler::ATSPHandler() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATSPHandler::BeginPlay() {
	Super::BeginPlay();

	FTimerHandle handle;
	GetWorld()->GetTimerManager().
	            SetTimer(handle, this,
	                     &ATSPHandler::HandleNearestNeighbour, 0.1f, false);
}


// Called every frame
void ATSPHandler::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	//draw the nodesToDraw
	for (int i = 0; i < nodesToDraw.Num() - 1; ++i) {
		DrawDebugLine(GetWorld(), nodesToDraw[i]->GetActorLocation(),
		              nodesToDraw[i + 1]->GetActorLocation(), FColor::Red,
		              false, -1, (uint8)0, 20.f);
	 }


	return;
	for (int i = 0; i < edgesToDraw.Num(); ++i) {
		TSPEdge* edge = edgesToDraw[i];
			DrawDebugLine(GetWorld(), edge->first->GetActorLocation(),
				edge->second->GetActorLocation(), FColor::Blue,
				false, -1, uint8(0), 2.f);
	}
}

void ATSPHandler::HandleNearestNeighbour() {
	nodesToDraw.Empty();

	TArray<ANodeActor*> nodes = nodeSpawner->Nodes; // copies nodes to a new array
	
	TArray<ANodeActor*> SortedNodeActors{}; // sorted actos

	// our start node, since we have to travel through all nodes, its not important where we start
	ANodeActor* root = nodes[0];
	SortedNodeActors.Add(root);
	ANodeActor* current = root;
	current->bVisited = true;

	float totalDistance = 0;
	for (int i = 0; i < nodes.Num(); ++i) {
		// find closest node
		float minDistance = 1000000.f;
		ANodeActor* minDistanceNode = nullptr;
		for (int j = 1; j < nodes.Num(); ++j) {
			// if not valid node, skip this iteration of for loop
			if (current == nodes[j] || nodes[j]->bVisited) {
				continue;
			}

			float distance = current->GetDistanceTo(nodes[j]);
			if (distance < minDistance) {
				minDistance = distance;
				minDistanceNode = nodes[j];
			}
		}
		if (minDistanceNode != nullptr) {
			totalDistance += minDistance;
			minDistanceNode->bVisited = true;
			current = minDistanceNode;
			SortedNodeActors.Add(current);
			nodes.Remove(current);
			i--;
		}

	}

	for (int i = 0; i < SortedNodeActors.Num(); ++i) {
		FString retVal = SortedNodeActors[i]->GetActorLocation().ToString();
		DL_NORMAL(retVal)
		nodesToDraw.Add(SortedNodeActors[i]);
	}
	nodesToDraw.Add(root);


	FoundTotalDistanceEvent(totalDistance / 100.f);

}

void ATSPHandler::HandleACO() {
	// gets nodes
	TArray<ANodeActor*> nodes = nodeSpawner->Nodes; // copies nodes to a new array
	// sets so that each node, has a path to every other node
	SetAllNodesPathsToAllOtherNodes(nodes);
	
	// our start node, since we have to travel through all nodes, its not important where we start
	ANodeActor* startNode = nodes[0];

	// set all nodes to not visited
	FACOAntResult antResult = TraveseGraphOnce(nodes, startNode);
	FString toLog = FString::FromInt( antResult.edgesWalked.Num());
	DL_NORMAL(toLog);
	for (int i = 0; i < antResult.edgesWalked.Num(); ++i) {
		edgesToDraw.Add(antResult.edgesWalked[i]);	
	}

	

}


FACOAntResult ATSPHandler::TraveseGraphOnce(TArray<ANodeActor*> nodes, ANodeActor* startNode) {


	ANodeActor* current = startNode;
	float totalDistance{};

	TArray<ANodeActor*> SortedNodeActors{}; // sorted actos
	TArray<TSPEdge*> edgesWalked{};
	// loop
	int x = 0;
	while (x < startNode->tspEdges.Num() + 10) { // safeguard to exit if we loop to many times
		x++;
		// chose a path
		// -------------

		// copy possible paths

		current->bVisited = true;
		TArray<TSPEdge*> nodePaths = current->tspEdges;

		// removing all paths that leads to a visited node
		for (int i = 0; i < nodePaths.Num(); ++i) {
			if (nodePaths[i]->GetOther(current)->bVisited) {
				nodePaths.RemoveAt(i);
				i--;
			}
		}

		// finished
		if (nodePaths.Num() == 0) {
			break;
		}

		// creates weights for all valid paths based on num paths, pheromones and distance
		std::vector<float> pathWeights{};
		float totalWeight = 0;
		
		for (int i = 0; i < nodePaths.Num(); ++i) {
			float weight = 1.f / nodePaths.Num() + // each node has a base weight
				nodePaths[i]->pheromones + // adding pheromones
				5.f / nodePaths[i]->distance;
			totalWeight += weight;
			pathWeights.push_back(weight);
		}

		// finding a random number inside the weight range
		float pathTarget = FMath::RandRange(0.f, totalWeight);

		// chooses a path based on the weights
		int chosenPath = -1;
		for (int p = 0; p < pathWeights.size(); ++p) {
			if (pathTarget < pathWeights[p]) {
				chosenPath = p;
				break;
			}
		}

		
		// adding to total distance
		totalDistance += nodePaths[chosenPath]->distance;
		// add to paths walked
		edgesWalked.Add(current->tspEdges[chosenPath]);
		// walk
		current = current->tspEdges[chosenPath]->GetOther(current);
	}

	FACOAntResult result{};
	result.edgesWalked = edgesWalked;
	result.totalDistance = totalDistance;
	return result;
}

void ATSPHandler::SetAllNodesPathsToAllOtherNodes(TArray<ANodeActor*>& list) {
	for (int i = 0; i < list.Num(); ++i) {
		// selects a node, and empties the connections
		ANodeActor* current = list[i];
		current->NodePaths.Empty();

		// sets connections
		for (int j = 0; j < list.Num(); ++j) {
			// if we are at the current node, bail
			if (list[i] == list[j])
				continue;;

			TSPEdge* edge = new TSPEdge();
			edge->first = list[i];
			edge->second = list[j];

			// if we do not have a equvilent edge
			if (!current->HasEdge(edge)) {
				current->tspEdges.Add(edge);
				edgesToDraw.Add(edge);
			}
			else {
				delete edge;
			}
		}
	}
}
