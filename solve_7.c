#include <stdio.h>

int solve(const int arr[], size_t size);

int main(void)
{
    const int arr[] = {3, 90, 300, 50, 150, 900};
    size_t size = sizeof(arr) / sizeof(int);

    int second_higher_number = solve(arr, size);

    printf("Second higher number: %i", second_higher_number);

    return 0;
}

int solve(const int arr[], size_t size)
{

    int i = 0;
    int higher_number = 0;
    int second_higher_number = 0;

    while (i < size)
    {
        if (higher_number < arr[i])
        {
            higher_number = arr[i];
        }

        i++;
    }

    i = 0;

    while (i < size)
    {
        if (second_higher_number < arr[i] && arr[i] != higher_number)
        {
            second_higher_number = arr[i];
        }

        i++;
    }

    return second_higher_number;
}
