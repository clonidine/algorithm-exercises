// HackerRank Algorithm Challenge: Number Line Jumps
// Date: 04/16/23
// Author: Migx3

char *kangaroo(int x1, int v1, int x2, int v2)
{
    unsigned int index_1 = x1, index_2 = x2;
    const unsigned int limit = 100000000;

    while (index_1 < limit || index_2 < limit)
    {
        if (index_1 == index_2)
        {
            return "YES";
        }

        index_1 += v1;
        index_2 += v2;
    }

    return "NO";
}