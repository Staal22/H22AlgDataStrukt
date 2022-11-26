// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NodeActor.h"
#include "AStarHadler.generated.h"



UCLASS()
class COMP3DATAALG_API AAStarHadler : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAStarHadler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 class ANodeSpawner* nodes_spawn{}; // ANodeSpawner has an array of ANodeActor. We can get its size and elements with node_in_the_spawner_array
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class ANodeActor*> Spawn_Nodes{};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ANodeActor*> closed_list; //visited nodes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ANodeActor*> open_list; //unvisited nodes

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ANodeActor*> pQueue; //unvisited nodes

	void A_Star_alg(ANodeActor*Node);
	void path_tracing();
	double heuristic_value(int start, int end);


	struct lowest_f {
		bool operator()( const ANodeActor& a, const  ANodeActor& b) const {
			return (a.f  <  b.f);
		}
	};

	struct lowest_Cost {
		bool operator()( const ANodeActor& a, const  ANodeActor& b) const {
			return (a.f  <  b.f);
		}
	};

	void reverse(ANodeActor*Node);

	bool IsEmpty();
	void draw_path();
};