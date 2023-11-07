// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>
#include "CoreMinimal.h"

/**
 * 
 */

extern const short flush[8192];
extern const short noflush5[6175];
extern const short noflush6[18395];
extern const short noflush7[49205];
extern const unsigned char suits[4609];

extern const unsigned int choose[53][10];
extern const int dp[5][14][10];

extern const char* rank_description[7463][2];

extern const short noflush_omaha[11238500];
extern const short flush_omaha[4099095];

class BOARDCARDGAMEPLUGIN_API PHTables
{
public:
	PHTables();
	~PHTables();
};
