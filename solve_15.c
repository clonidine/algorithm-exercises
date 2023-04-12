unsigned int getTallest(int candles_count, int *candles, long target)
{
    unsigned int tallest = 0;
    
    for (int i = 0; i < candles_count; i++)
    {
        if (candles[i] == target)
        {
            tallest++;
        }
    }

    return tallest;
}

long getMaximumHeightCandles(int candles_count, int *candles)
{
    
    long maximum_height_candles;
    unsigned int mid = candles_count % 2 == 0 ? candles_count / 2 - 1 : (candles_count - 1) / 2;
    
    unsigned int index_1 = 0;
    unsigned int index_2 = candles_count - 1;
    
    while (index_1 < mid - 1 || index_2 > mid)
    {
        if (index_1 == 0)
        {
            if (candles[mid] > candles[index_1] && candles[mid] > candles[index_2])
            {
                maximum_height_candles = candles[mid];
            }

            else if (candles[index_1] > candles[mid] && candles[index_1] > candles[index_2])
            {
                maximum_height_candles = candles[index_1];
            }

            else
            {
                maximum_height_candles = candles[index_2];
            }
        }

        else
        {

            if (candles[index_1] > candles[index_2] && candles[index_1] > maximum_height_candles)
            {
                maximum_height_candles = candles[index_1];
            }

            else if (candles[index_2] > candles[index_1] && candles[index_2] > maximum_height_candles)
            {
                maximum_height_candles = candles[index_2];
            }
        }
        
        if (index_1 < mid - 1 && index_2 > mid)
        {
            index_1++;
            index_2--;
        }

        else if (index_1 < mid - 1)
        {
            index_1++;
        }

        else if (index_2 > mid)
        {
            index_2--;
        }
    }

    return maximum_height_candles;
}

int birthdayCakeCandles(int candles_count, int* candles) 
{
    long maximum_height_candles = getMaximumHeightCandles(candles_count, candles);
    unsigned int tallest = getTallest(candles_count, candles, maximum_height_candles);
    
    return tallest;
}