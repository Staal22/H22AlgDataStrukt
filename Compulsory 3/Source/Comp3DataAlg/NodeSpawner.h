// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
// #include "Alg_Djikstra.h"
#include "GameFramework/Actor.h"
#include "NodeSpawner.generated.h"

UCLASS()
class COMP3DATAALG_API ANodeSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANodeSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* Collision{};
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"));
	TSubclassOf<AActor> NodeToSpawn;

	TArray<class ANodeActor*> Nodes{};

	UFUNCTION(BlueprintCallable)
	void SpawnInitialNodes();
	
	UFUNCTION(BlueprintCallable)
	void ResetSpawner();
	
protected:
	
private:
	UPROPERTY(EditAnywhere)
	int UsrDefNodeCount = 0;
	
};
