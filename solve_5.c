#include <stdio.h>

int solve(const int arr[], size_t size);

int main(void)
{
    const int arr[] = {3, 90, 50, 150, 120, 10, 300, 100, 200, 2000, 1000};
    size_t size = sizeof(arr) / sizeof(int);

    int higher = solve(arr, size);

    printf("Higher number: %i", higher);

    return 0;
}

int solve(const int arr[], size_t size)
{

    int i = 0;
    int higher = 0;

    while (i < size)
    {
        if (higher < arr[i])
        {
            higher = arr[i];
        }

        i++;
    }

    return higher;
}
