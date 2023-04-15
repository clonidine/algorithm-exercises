// HackerRank Algorithm Challenge: Grading Students
// Date: 04/14/23
// Author: Migx3

#include <stdlib.h>

void fill_rounding_grades(int *rounding, const int *grades, int grades_count)
{
    const int multiple = 5;
    int rest, num_1, num_2, difference;

    for (int i = 0; i < grades_count; i++)
    {
        num_1 = grades[i];

        rest = num_1 % multiple;

        if (rest != 0 && num_1 >= 38)
        {
            num_2 = num_1 + (multiple - rest);

            difference = num_2 - num_1;

            if (difference < 3)
            {
                num_1 = num_2;
            }
        }

        rounding[i] = num_1;
    }
}

int *gradingStudents(int grades_count, int *grades, int *result_count)
{
    int *rounding = (int *) malloc(sizeof(int) * grades_count);

    fill_rounding_grades(rounding, grades, grades_count);

    return rounding;
}