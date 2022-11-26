
// Fill out your copyright notice in the Description page of Project Settings.


#include "AStarHadler.h"
#include "NodeActor.h"
#include "NodeSpawner.h"
#include "Containers/Queue.h"
#include "Templates/Tuple.h"
#include "Engine/World.h"
#include "Containers/Array.h"
#include "DrawDebugHelpers.h"

// Sets default values
AAStarHadler::AAStarHadler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAStarHadler::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle timer_handle;
	GetWorld()->GetTimerManager().SetTimer(timer_handle, this, &AAStarHadler::path_tracing, 0.3f, false);
	UE_LOG(LogTemp, Warning, TEXT("HeapTop is null"))
}

// Called every frame
void AAStarHadler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}



void AAStarHadler::A_Star_alg(ANodeActor* Node)
{
	////set default value for the start node
	//

	
	//for (int i = 1; i < Node->NodePaths.Num(); i++) {  //set values for the rest of the nodes
	//	nodes_spawn->Nodes[i]->f=INT_MAX;
	//	
	//
	//}

	//for (int i=0; i < nodes_spawn->Nodes.Num(); i++) { //put all the nodes to the unvisited array
	//	open_list[i] = nodes_spawn->Nodes[i];
	//	open_list.HeapTop();
	//}

	open_list.RemoveAt(0);
	open_list.Heapify(lowest_f());

	FString b = "Amount nodes in open list BEFORE while loop ";
	b.AppendInt(open_list.Num());
	UE_LOG(LogTemp, Warning, TEXT("%s"), *b)
	
	/*open_list.Add(nodes_spawn->Nodes[0]);*/
	
	if (Node->isEnd == true) {
		UE_LOG(LogTemp, Warning, TEXT("END NODE REACHED"))
		reverse(Node);
		return;
	}

	//WHILE LOOP IS NOT THE CAUSE OF THE CRASH
	while (open_list.Num() > 0) {

		//HERE IS THE PROBLEM
	/*	for (int i = 0; i < open_list.Num(); i++) {
			open_list.HeapSort(lowest_f());
		}*/

		
		  
		// ANodeActor* Node = Node;
		//for (int i = 0; i < nodes_spawn->Nodes.Num(); i++)
		for (int i = 0; i < Node->NodePaths.Num(); i++) {
			
			if (Node == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("Bingus"))
			}

			double f_value = Node->DistanceFromStart + /*Node->NodePaths[i].distance +*/ Node->HeuristicFloatFromStart;


			if ( Node->f < Node->NodePaths[i].ConnectedNode->f)
			{
				Node->NodePaths[i].ConnectedNode->PrevInPath = Node;
				Node->NodePaths[i].ConnectedNode->DistanceFromStart = Node->NodePaths[i].distance + Node->DistanceFromStart;
				Node->NodePaths[i].ConnectedNode->f = f_value;
			}
				/*current_i_guess_with_spaces->NodePaths[i].ConnectedNode->DistanceFromStart +
				current_i_guess_with_spaces->NodePaths[i].ConnectedNode->HeuristicFloatFromStart;*/

			/*nodes_spawn->Nodes[i]->h = heuristic_value(i, nodes_spawn->Nodes.Num()-1);*/
			/*nodes_spawn->Nodes[i]->g =nodes_spawn->Nodes[0]->DistanceFromStart+nodes_spawn->Nodes[i]->NodePaths[i].distance;*/
		}
	
		closed_list.Emplace(Node);
		closed_list.Heapify(lowest_f());
		/*open_list.Remove(Node);
		open_list.Heapify(lowest_f());*/
		
		
		// FString a = "Amount nodes in open list " + open_list.Num();
		// UE_LOG(LogTemp, Warning, TEXT("%s"), *a)

		// for (int i = 0; i < open_list.Num(); i++) {
		// 	FString s = "Visiting node AAA " + open_list[i]->GetName();
		// 	UE_LOG(LogTemp, Warning, TEXT("%s"), *s)
		// }

		if (open_list.Num() != 0) {
			FString s = "Visiting node " + open_list.HeapTop()->GetName();
			UE_LOG(LogTemp, Warning, TEXT("%s"), *s)
				A_Star_alg(open_list.HeapTop());
		}
		if (open_list.Num() <= 0) {
			UE_LOG(LogTemp, Warning, TEXT("empty"))
		}

	}



	/*draw_path();*/
	/*reverse(Node);*/
}

void AAStarHadler::path_tracing()
{
	nodes_spawn->Nodes[0]->f = 0;
	
	


	for (int i = 0; i < nodes_spawn->Nodes.Num(); i++) {
		FString s = "Visiting node :V  " + nodes_spawn->Nodes[i]->GetName();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *s)
		open_list.HeapPush(nodes_spawn->Nodes[i], lowest_f());
	}

	if (open_list.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Size is null!"))
	}
	else if (open_list.HeapTop() == nullptr) 
	{
		UE_LOG(LogTemp, Warning, TEXT("HeapTop is null"))
	}
	else
	{

		FString s = "Visiting node " + open_list.HeapTop()->GetName();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *s)
		A_Star_alg(open_list.HeapTop());
	}
	

}

double AAStarHadler::heuristic_value(int start, int end)
{
	const int start_ = start;
	const int end_ = end;

	

	FVector location_node_start = nodes_spawn->Nodes[start_]->GetActorLocation();
	FVector location_node_end = nodes_spawn->Nodes[end_]->GetActorLocation();

	double h{(location_node_start.X-location_node_end.X)+(location_node_start.Y-location_node_end.Y)+(location_node_start.Z-location_node_end.Z)};
	return h;
}

bool AAStarHadler::IsEmpty()
{
	return open_list.Num()<=0;
}



//void AAStarHadler::draw_path()
//{
//
//	for (int i = 0; i < closed_list.Num(); i++) {
//		closed_list[i]->NodePaths[i].ConnectedNode->NodePaths[i].shortestPath = true;
//	}
//
//	
//}


void AAStarHadler::reverse(ANodeActor* Node)
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
		reverse(Node->PrevInPath);
	}
}



