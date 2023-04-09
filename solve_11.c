int diagonalDifference(int arr_rows, int arr_columns, int** arr) 
{
    int left_to_right = 0;
    int right_to_left = 0;

    int temp = arr_rows - 1;
    int num;

    for (int i = 0; i < arr_rows; i++)
    {
        for (int j = 0; j < arr_columns; j++)
        {
            if (i == j)
            {
                num = arr[i][j];
                left_to_right += num;
            }

            if (j == temp)
            {
                num = arr[i][j];
                right_to_left += num;
                temp--;
            }
        }
    }

    int difference = left_to_right > right_to_left ? left_to_right - right_to_left : right_to_left - left_to_right;

    return difference;
}