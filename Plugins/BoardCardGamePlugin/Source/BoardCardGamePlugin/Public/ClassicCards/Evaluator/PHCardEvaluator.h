// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PHCardEvaluator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOARDCARDGAMEPLUGIN_API UPHCardEvaluator : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPHCardEvaluator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual int EvaluateCards(TArray<struct FBCG_DataStruct> Cards);

};
