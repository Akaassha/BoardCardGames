// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BCG_Action.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBCG_FinnishAction, bool, Successfull);

class ABCG_Player;
class ABCG_Dealer;

UCLASS(Blueprintable)
class BOARDCARDGAMEPLUGIN_API UBCG_Action : public UObject
{
	GENERATED_BODY()
	
public:
	UBCG_Action();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Execute(ABCG_Player* player, ABCG_Dealer* dealer);

	UPROPERTY(BlueprintCallable)
	FBCG_FinnishAction BCG_FinnishAction;

private:
	UFUNCTION()
	void BCG_RemoveAction(bool success);
};
