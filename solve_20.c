// HackerRank Algorithm Challenge: Between Two Sets
// Date: 04/18/23
// Author: Migx3

#include <stdio.h>

int check_factors_arr(int n, size_t arr_size, const int *target)
{
    unsigned int factors = 0;
    unsigned int index = 0;

    while (index < arr_size)
    {
        if (n % target[index] == 0)
        {
            factors++;
        }

        index++;
    }

    if (factors == arr_size)
    {
        return 1;
    } else
    {
        return 0;
    }
}

int check_factors_integer(const int *target, int n, size_t size)
{
    int hits = 0;

    for (int i = 0; i < size; i++)
    {
        if (target[i] % n == 0)
        {
            hits++;
        }
    }

    if (hits == size)
    {
        return 1;
    } else
    {
        return 0;
    }
}

int get_max(size_t size, const int *target)
{
    int max = 0;

    unsigned int index = 0;

    while (index < size)
    {
        if (target[index] > max)
        {
            max = target[index];
        }

        index++;
    }

    return max;
}

int get_min(int size, const int *target)
{
    int lower = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j >= 0; j--)
        {
            if (i > 0)
            {
                if (target[i] <= target[j] && target[i] <= lower)
                {
                    lower = target[i];
                }
            } else
            {
                if (target[i] <= target[j])
                {
                    lower = target[i];
                }
            }
        }
    }

    return lower;
}

int getTotalX(int a_count, int *a, int b_count, int *b)
{

    int max = get_max(a_count, a), min = get_min(b_count, b);
    int count = 0;

    for (int i = max; i <= min; i++)
    {
        if (check_factors_arr(i, a_count, a) && check_factors_integer(b, i, b_count))
        {
            count++;
        }
    }

    return count;
}