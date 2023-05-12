// HackerRank Algorithm Challenge: Breaking the Records
// Date: 05/12/23
// Author: Migx3

#include <stdlib.h>
#include <stdio.h>

int* breakingRecords(int scores_count, int* scores, int* result_count)
{
    int *break_records = malloc(sizeof(int) * 2);

    break_records[0] = 0;
    break_records[1] = 0;

    int score;
    
    int highest_score = scores[0];
    int lowest_score = scores[0];

    for (int i = 0; i < scores_count; i++)
    {
        score = scores[i];

        if (score > highest_score)
        {
            highest_score = score;

            break_records[0]++;
        }

        else if (score < lowest_score)
        {
            lowest_score = score;

            break_records[1]++;
        }
    }

    return break_records;
}