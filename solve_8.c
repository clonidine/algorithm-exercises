#include <stdio.h>

void sort_arr(int *arr, size_t size);

void print_arr(int *arr, size_t size);

int main(void)
{

    int arr[] = {4, 49, 123, 345, 12, 45, 7, 5, 3, 400};
    size_t size = sizeof(arr) / sizeof(int);

    printf("Before sorting: \n");

    print_arr(arr, size);

    sort_arr(arr, size);

    printf("\n");

    printf("After sorting: ");
    print_arr(arr, size);

    return 0;
}

void sort_arr(int *arr, size_t size)
{

    if (size <= 1)
    {
        return;
    }

    int key, j;

    int index_1 = 1;

    while (index_1 < size)
    {
        key = arr[index_1];
        j = index_1 - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        index_1++;
    }
}

void print_arr(int *arr, size_t size)
{
    int i = 0;

    while (i < size)
    {

        printf("%i", arr[i]);

        if (i < size - 1)
        {
            printf(", ");
        }

        i++;
    }
}