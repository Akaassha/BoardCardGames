// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassicCards/Evaluator/PHHash.h"

PHHash::PHHash()
{
}

PHHash::~PHHash()
{
}

int hash_quinary(const unsigned char q[], int k)
{
    int sum = 0;
    const int len = 13;
    int i;

    for (i = 0; i < len; i++)
    {
        sum += dp[q[i]][len - i - 1][k];

        k -= q[i];

        if (k <= 0)
        {
            break;
        }
    }

    return sum;
}