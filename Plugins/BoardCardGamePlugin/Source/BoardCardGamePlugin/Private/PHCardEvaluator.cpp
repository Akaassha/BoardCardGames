// Fill out your copyright notice in the Description page of Project Settings.

#include "PHCardEvaluator.h"
#include "PHTables.h"

// Sets default values for this component's properties
UPHCardEvaluator::UPHCardEvaluator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UPHCardEvaluator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

int UPHCardEvaluator::EvaluateCards(TArray<FBCG_DataStruct> Cards)
{
	return 0;
}