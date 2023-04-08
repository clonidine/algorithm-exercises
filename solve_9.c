#include <stdlib.h>

int* compareTriplets(int a_count, int* a, int b_count, int* b, int *result_count) 
{
    int *arr = (int *) malloc(*result_count * sizeof(int));

    int *alice = arr;
    int *bob = &arr[1];

    int index = 0;
    const int limit = 3;
    
    while (index < limit)
    {
        if (a[index] > b[index])
        {
            (*alice)++;
        }

        else if (b[index] > a[index])
        {
            (*bob)++;
        }

        index++;
    }

    return arr;
}