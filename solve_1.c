#include <stdio.h>
#include <stdlib.h>

int *create_array()
{
    int *arr = (int *) malloc(sizeof(int) * 1);

    return arr;
}

void print_array(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%i ", arr[i]);
    }
}

int main(void)
{

    int num;

    int index = 0;
    int length = 0;

    int *arr = create_array();

    do
    {
        printf("Number to add in array (-1 to stop): ");
        scanf("%i", &num);

        if (num > 0)
        {
            length++;

            arr = realloc(arr, sizeof(int) * length);
            arr[index] = num;

            index++;
        }

    } while (num > 0);

    print_array(arr, length);

    free(arr);

    return 0;
}