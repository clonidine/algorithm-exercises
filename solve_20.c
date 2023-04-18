// HackerRank Algorithm Challenge: Between Two Sets
// Date: 04/17/23
// Author: Migx3

#include <stdio.h>

int is_factor(int n, size_t arr_size, int target[])
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

int getTotalX(int a_count, int* a, int b_count, int* b) 
{
    
    unsigned int being_considered = 0;
    unsigned int num_1, num_2, num_3;
    unsigned int count_numbers = 0;

    const unsigned int limit = 10;

    unsigned int index_1 = 0, index_2 = 0, index_3 = 0;
    int numbers[10];

    while (index_1 < a_count || index_2 < b_count)
    {
        num_1 = a[index_1];

        if (index_1 > 0)
        {
            if (is_factor(num_3, a_count, a) && is_factor(num_3, b_count, b))
            {
                count_numbers++;
                numbers[index_3] = num_3;
            }
        }

        if (is_factor(num_1, a_count, a) && is_factor(num_1, b_count, b))
        {
            count_numbers++;
            numbers[index_3] = num_1;
        {
            num_3 = num_1 * 2;
        }

        if (index_1 < a_count && index_2 < b_count)
        {
            index_1++;
            index_2++;
        }

        else if (index_1 < a_count)
        {
            index_1++;
        }

        else
        {
            index_2++;
        }
    }
    
        return count_numbers;
     }
}

int main(void)
{
   
    const int a_count = 2;
    const int b_count = 2;

    int a[] = {2, 6};
    int b[] = {24, 36};

    int result = getTotalX(a_count, a, b_count, b);

    printf("Result: %i", result);

    return 0;
}