// HackerRank Algorithm Challenge: Apple and Orange
// Date: 04/16/23
// Author: Migx3

#include <stdio.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) 
{
    int apples_falls = 0, oranges_falls = 0;

    int arr_apples[apples_count];
    int arr_oranges[oranges_count];

    unsigned int index = 0;

    while (index < apples_count)
    {
        arr_apples[index] = apples[index] + a;
        index++;
    }

    index = 0;

    while (index < oranges_count)
    {
        arr_oranges[index] = oranges[index] + b;
        index++;
    }

    index = 0;

    while (index < apples_count)
    {
        if (arr_apples[index] >= s && arr_apples[index] <= t)
        {
            apples_falls++;
        }

        index++;
    }

    index = 0;

    while (index < oranges_count)
    {
        if (arr_oranges[index] >= s && arr_oranges[index] <= t)
        {
            oranges_falls++;
        }

        index++;
    }

    printf("%i\n", apples_falls);
    printf("%i", oranges_falls);
}