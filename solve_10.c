long aVeryBigSum(int ar_count, long* ar) 
{

    unsigned int mid = ar_count % 2 == 0 ? ar_count / 2 - 1 : (ar_count - 1) / 2;
    
    long sum = ar[mid];

    unsigned int index_1 = 0;
    unsigned int index_2 = ar_count - 1;
    unsigned int iterator = 0;

    while (index_1 < mid || index_2 > mid)
    {

        iterator++;

        if (index_1 < mid - 1 && index_2 >= mid)
        {
            sum = sum + ar[index_1] + ar[index_2];
           
            index_1++;
            index_2--;
        }
        
        else if (index_1 < mid)
        {
            sum = sum + ar[index_1];
            index_1++;
        }

        else if (index_2 > mid) 
        {
            sum = sum + ar[index_2];
            index_2--;
        }
        
    }

    return sum;
}