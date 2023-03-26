#include <stdio.h>
#include <stdlib.h>

int *create_array(int length)
{
    int *arr = (int *) malloc(sizeof(int) * length);

    return arr;
}

void fill_array(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % 101;
    }
}

void print_array(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%i\n", arr[i]);
    }
}

int main(void)
{

    int length;

    printf("How many numbers do you want in array? ");
    scanf("%i", &length);

    int *arr = create_array(length);

    fill_array(arr, length);

    print_array(arr, length);

    free(arr);

    return 0;
}