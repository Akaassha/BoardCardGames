// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BCG_Card.generated.h"

UCLASS()
class BOARDCARDGAMEPLUGIN_API ABCG_Card : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABCG_Card();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Apperance)
	class UStaticMeshComponent* CardMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* CardMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	class UTexture2D* avers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	class UTexture2D* revers;

	virtual void SetPropertis(UDataTable* CardTable, FName RowName) {};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
