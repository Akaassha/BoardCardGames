// Fill out your copyright notice in the Description page of Project Settings.
#include "ClassicCards/ClassicCard.h"
#include "ClassicCards/Evaluator/CardEvaluatorBFL.h"

// Sets default values
AClassicCard::AClassicCard()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CardData.id = UCardEvaluatorBFL::card_id(CardData.kind, CardData.color);
}

FString AClassicCard::GetCardNameAsString()
{
	FText textColor;
	FText textKind;
	UEnum::GetDisplayValueAsText(CardData.color, textColor);
	UEnum::GetDisplayValueAsText(CardData.kind, textKind);

	return textKind.ToString() + " " + textColor.ToString();
}

void AClassicCard::Print(float time)
{
	GEngine->AddOnScreenDebugMessage(-1, time, FColor::Yellow, GetCardNameAsString());
}

void AClassicCard::SetPropertis(UDataTable* CardTable, FName RowName)
{
	CardData.color = (CardTable->FindRow<FClassicCardStruct>(RowName, ""))->color;
	CardData.kind = (CardTable->FindRow<FClassicCardStruct>(RowName, ""))->kind;
	CardData.avers = (CardTable->FindRow<FClassicCardStruct>(RowName, ""))->avers;
	CardData.id = UCardEvaluatorBFL::card_id(CardData.kind, CardData.color);
}