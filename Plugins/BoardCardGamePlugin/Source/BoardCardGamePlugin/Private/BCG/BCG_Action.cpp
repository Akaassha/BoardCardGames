// Fill out your copyright notice in the Description page of Project Settings.


#include "BCG/BCG_Action.h"
#include "BCG/BCG_Dealer.h"
#include "BCG/BCG_Player.h"

UBCG_Action::UBCG_Action()
{
	BCG_FinnishAction.AddDynamic(this, &UBCG_Action::BCG_RemoveAction);
}

void UBCG_Action::BCG_RemoveAction(bool success)
{
	if (!success) return;

	BCG_FinnishAction.RemoveAll(this);
}
