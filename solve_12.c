#include <stdio.h>

void plusMinus(int arr_count, int* arr) 
{
    
    float neutral = 0;
    float positive = 0;
    float negative = 0;
    
    for (int i = 0; i < arr_count; i++) 
    {
        
        if (arr[i] > 0) 
        {
            positive++;
        }
        
        else if (arr[i] == 0) 
        {
            neutral++;
        }
        
        else 
        {
            negative++;
        }
    }

    float ratios_positive = positive / arr_count;
    float ratios_negative = negative / arr_count;
    float ratios_neutral = neutral / arr_count;
    
    printf("%.6f\n", ratios_positive);
    printf("%.6f\n", ratios_negative);
    printf("%.6f", ratios_neutral);

}