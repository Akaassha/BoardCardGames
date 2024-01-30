// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG/BCG_Card.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABCG_Card::ABCG_Card()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CardMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("CardMesh");

}

// Called when the game starts or when spawned
void ABCG_Card::BeginPlay()
{
	Super::BeginPlay();

}

void ABCG_Card::OnConstruction(const FTransform& Transform)
{
	if (CardMesh != nullptr)
	{
		CardMeshComponent->SetStaticMesh(CardMesh);

		if (auto AversMat = CardMesh->GetMaterial(0))
		{
			auto DynMatAvers = UMaterialInstanceDynamic::Create(AversMat, this);
			DynMatAvers->SetTextureParameterValue("Avers", avers);
			CardMeshComponent->SetMaterial(0, DynMatAvers);
		}

		if (auto ReversMat = CardMesh->GetMaterial(1))
		{
			auto DynMatRevers = UMaterialInstanceDynamic::Create(ReversMat, this);
			DynMatRevers->SetTextureParameterValue("Revers", revers);
			CardMeshComponent->SetMaterial(1, DynMatRevers);
		}

	}
}

// Called every frame
void ABCG_Card::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

