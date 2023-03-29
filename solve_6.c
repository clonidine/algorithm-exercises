#include <stdio.h>

int solve(const int arr[], size_t size);

int main(void)
{
    const int arr[] = {3, 90, 50, 150};
    size_t size = sizeof(arr) / sizeof(int);

    int sum = solve(arr, size);

    printf("Sum number: %i", sum);

    return 0;
}

int solve(const int arr[], size_t size)
{

    int i = 0;
    int sum = 0;

    while (i < size)
    {
        sum += arr[i];
        i++;
    }

    return sum;
}
