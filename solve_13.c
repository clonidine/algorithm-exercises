#include <stdio.h>

void staircase(int n) 
{
    int aux = 1;
    
    for (int i = n - 1; i >= 0; i--)
    {

        if (i > 0)
        {
            for (int j = 0; j < i; j++)
            {
                 printf("%c", 32);
            }
        }

        for (int k = 0; k < aux; k++)
        {
            printf("%c", '#');
        }

        printf("\n");
        
        aux++;
    }
}

int main(void)
{
    int n = 6;

    staircase(n);
}