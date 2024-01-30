// Fill out your copyright notice in the Description page of Project Settings.
#include "ClassicCards/ClassicCard.h"

// Sets default values
AClassicCard::AClassicCard()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	card_id(CardData.kind, CardData.color);
}

FString AClassicCard::GetCardNameAsString()
{
	FText textColor;
	FText textKind;
	UEnum::GetDisplayValueAsText(CardData.color, textColor);
	UEnum::GetDisplayValueAsText(CardData.kind, textKind);

	return textKind.ToString() + " " + textColor.ToString();
}

int AClassicCard::card_id(BCG_CardKind kind, BCG_CardColor color)
{
	FString PHEvaluatorCode{};

	switch (kind)
	{
	case BCG_CardKind::two:
		PHEvaluatorCode += "2";
		break;
	case BCG_CardKind::three:
		PHEvaluatorCode += "3";
		break;
	case BCG_CardKind::four:
		PHEvaluatorCode += "4";
		break;
	case BCG_CardKind::five:
		PHEvaluatorCode += "5";
		break;
	case BCG_CardKind::six:
		PHEvaluatorCode += "6";
		break;
	case BCG_CardKind::seven:
		PHEvaluatorCode += "7";
		break;
	case BCG_CardKind::eight:
		PHEvaluatorCode += "8";
		break;
	case BCG_CardKind::nine:
		PHEvaluatorCode += "9";
		break;
	case BCG_CardKind::ten:
		PHEvaluatorCode += "T";
		break;
	case BCG_CardKind::jack:
		PHEvaluatorCode += "J";
		break;
	case BCG_CardKind::queen:
		PHEvaluatorCode += "Q";
		break;
	case BCG_CardKind::king:
		PHEvaluatorCode += "K";
		break;
	case BCG_CardKind::ace:
		PHEvaluatorCode += "A";
		break;
	default:
		return -1;
	}

	switch (color)
	{
	case BCG_CardColor::club:
		PHEvaluatorCode += "C";
		break;
	case BCG_CardColor::diamond:
		PHEvaluatorCode += "D";
		break;
	case BCG_CardColor::heart:
		PHEvaluatorCode += "H";
		break;
	case BCG_CardColor::spade:
		PHEvaluatorCode += "S";
		break;
	default:
		return -1;
	}

	return rankMap.at(PHEvaluatorCode[0]) * 4 + suitMap.at(PHEvaluatorCode[1]);
}

void AClassicCard::Print(float time)
{
	GEngine->AddOnScreenDebugMessage(-1, time, FColor::Yellow, GetCardNameAsString());
}

void AClassicCard::SetPropertis(UDataTable* CardTable, FName RowName)
{
	FBCG_DataStruct card;
	card.color = (CardTable->FindRow<FBCG_DataStruct>(RowName, ""))->color;
	card.kind = (CardTable->FindRow<FBCG_DataStruct>(RowName, ""))->kind;
	card.id = (CardTable->FindRow<FBCG_DataStruct>(RowName, ""))->id;
	card.id = AClassicCard::card_id(card.kind, card.color);
}