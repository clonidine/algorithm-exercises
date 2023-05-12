// Website: HackerRank
// Topic: Problem Solving
// Challenge: Divisible Sum Pairs
// Date: 05/12/23
// Author: Migx3

int divisibleSumPairs(int n, int k, const int *ar) {

    int pairs = 0;
    int num_1, num_2, sum;

    for (int i = 0; i < n; i++) {

        num_1 = ar[i];

        for (int j = i + 1; j < n; j++) {
            num_2 = ar[j];

            sum = num_1 + num_2;

            if (sum % k == 0) {
                pairs++;
            }
        }
    }

    return pairs;
}