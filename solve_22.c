// HackerRank Algorithm Challenge: Subarray Division
// Date: 05/12/23
// Author: Migx3

int birthday(int s_count, const int *s, int d, int m) {
    int divided = 0;

    int sum = 0;
    unsigned int index;

    for (int i = 0; i < s_count; i++) {
        index = i;

        for (unsigned int j = 0; j < m; j++) {
            sum += s[index];
            index++;
        }

        if (sum == d) {
            divided++;
        }

        sum = 0;
    }

    return divided;
}