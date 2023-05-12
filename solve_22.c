// Website: HackerRank
// Topic: Problem Solving
// Challenge: Subarray Division
// Date: 05/12/23
// Author: Migx3

int birthday(int s_count, const int *s, int d, int m) {
    int divided = 0;

    int sum = 0;

    for (int i = 0; i < s_count; i++) {

        for (unsigned int j = i; j < m; j++) {
            sum += s[j];
        }

        if (sum == d) {
            divided++;
        }

        sum = 0;
    }

    return divided;
}
