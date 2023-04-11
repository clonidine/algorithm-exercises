#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) 
{
    
    long long minimum_sum = 0;
    long long maximum_sum = 0;

    long long higher_number = 0;
    long long lower_number = 0;

    // getting higher number

    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] > higher_number)
        {
            higher_number =  arr[i];
        }
    }

    long long num_1, num_2;

    // getting lower number

    for (int i = 0; i < arr_count; i++)
    {
        for (int j = arr_count - 1; j >= 0; j--)
        {
            if (i > 0)
            {
                if (arr[i] <= arr[j] && arr[i] <= lower_number)
                {
                    lower_number = arr[i];
                }
            }
            else
            {
                if (arr[i] <= arr[j])
                {
                    lower_number = arr[i];
                }
            }
        }
    }
 
    // getting maximum and minimum sum

    if (higher_number == lower_number)
    {
    
        for (int i = 0; i < arr_count; i++)
        {
            minimum_sum += arr[i];
            maximum_sum += arr[i];
        }

        minimum_sum -= higher_number;
        maximum_sum -= lower_number;
    }

    for (int i = 0; i < arr_count; i++)
    {
        
        if (arr[i] != higher_number)
        {
            minimum_sum += arr[i];
        }

        if (arr[i] != lower_number)
        {
            maximum_sum += arr[i];
        }
    }

    printf("%lld %lld", minimum_sum, maximum_sum);
}

int main(void)
{

    int arr[] = {5 , 5 , 5 , 5 , 5};

    miniMaxSum(5, arr);

    return 0;
}