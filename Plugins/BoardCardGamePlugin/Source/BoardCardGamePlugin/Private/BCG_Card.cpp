// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG_Card.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABCG_Card::ABCG_Card()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CardMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("CardMesh");

	card_id(CardData.kind, CardData.color);
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
			DynMatAvers->SetTextureParameterValue("Avers", CardData.avers);
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

void ABCG_Card::Print(float time)
{
	GEngine->AddOnScreenDebugMessage(-1, time, FColor::Yellow, GetCardNameAsString());
}

FString ABCG_Card::GetCardNameAsString()
{
	FText textColor;
	FText textKind;
	UEnum::GetDisplayValueAsText(CardData.color, textColor);
	UEnum::GetDisplayValueAsText(CardData.kind, textKind);

	return textKind.ToString() + " " + textColor.ToString();
}

int ABCG_Card::card_id(BCG_CardKind kind, BCG_CardColor color)
{
	FString PHEvaluatorCode {};

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