// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BCG_FunctionLibrary.generated.h"

/**
 * 
 */

UENUM()
enum class rank_category : uint8
{
    // FIVE_OF_A_KIND = 0, // Reserved
    STRAIGHT_FLUSH = 1 UMETA(DisplayName = "Straight Flush"),
    FOUR_OF_A_KIND = 2 UMETA(DisplayName = "Four of a Kind"),
    FULL_HOUSE = 3 UMETA(DisplayName = "Full House"),
    FLUSH = 4 UMETA(DisplayName = "Flush"),
    STRAIGHT = 5 UMETA(DisplayName = "Straight"),
    THREE_OF_A_KIND = 6 UMETA(DisplayName = "Three of a Kind"),
    TWO_PAIR = 7 UMETA(DisplayName = "Two Pair"),
    ONE_PAIR = 8 UMETA(DisplayName = "One Pair"),
    HIGH_CARD = 9 UMETA(DisplayName = "High Card"),
};

/*
 * Given a rank from 1 to 7462
 * Returns a string description of the rank, e.g. "King-High Straight Flush"
 */
const char* describe_rank(int rank);

/*
 * Given a rank from 1 to 7462
 * Returns a string description of a sample hand of the rank, e.g. "AKQJT"
 */
const char* describe_sample_hand(int rank);

UCLASS()
class BOARDCARDGAMEPLUGIN_API UBCG_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    static int EvaluateCards(TArray<struct FBCG_DataStruct> Cards);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetHandValueAsText(int value);

    static rank_category get_rank_category(int rank);

    static bool is_flush(int rank);
};

class PHRank
{
public:
    int value() const { return value_; }

    bool operator<(const PHRank& other) const {
        return value_ > other.value_;
    }

    bool operator<=(const PHRank& other) const {
        return value_ >= other.value_;
    }

    bool operator>(const PHRank& other) const {
        return value_ < other.value_;
    }

    bool operator>=(const PHRank& other) const {
        return value_ <= other.value_;
    }

    bool operator==(const PHRank& other) const {
        return value_ == other.value_;
    }

    bool operator!=(const PHRank& other) const {
        return value_ != other.value_;
    }

    std::string describeRank() const {
        return describe_rank(value_);
    }

    std::string describeSampleHand() const {
        return describe_sample_hand(value_);
    }

    bool isFlush() const {
        return UBCG_FunctionLibrary::is_flush(value_);
    }

    PHRank(int value) : value_(value) {}
    PHRank() {}

private:
    int value_ = 0;
};

