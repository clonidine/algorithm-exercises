#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int rows, int columns)
{
    int **matrix = (int **) malloc(sizeof(int *) * rows);

    for (int i = 0; i < columns; i++)
    {
        matrix[i] = malloc(sizeof(int *) * columns);
    }

    return matrix;
}

void fill_matrix(int **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = rand() % 101;
        }
    }
}

void print_matrix(int **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%i ", matrix[i][j]);
        }

        printf("\n");
    }
}

int main(void)
{

    int rows, columns;

    printf("Rows: ");
    scanf("%i", &rows);

    printf("Columns: ");
    scanf("%i", &columns);

    int **matrix = create_matrix(rows, columns);

    fill_matrix(matrix, rows, columns);

    print_matrix(matrix, rows, columns);

    free(matrix);

    return 0;
}