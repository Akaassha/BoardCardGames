// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PHTables.h"

/**
 * 
 */

int hash_quinary(const unsigned char q[], int k);

class BOARDCARDGAMEPLUGIN_API PHHash
{
public:
	PHHash();
	~PHHash();
};
