#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// HackerRank Algorithm Challenge: Time Conversion
// Date: 04/14/23
// Author: Migx3

char *create_military_hour(char *hour);

void fill_military_hour(char *military, char *civil_time);

char *timeConversion(char *s);

int is_am(char *hour);

char *to_str_char(char c);

char *to_str_int(int n);

int to_int(char *s);

int main()
{
    char *civil_time = "02:00:00AM";

    char *military_time = timeConversion(civil_time);

    printf("Military time: %s\n", military_time);
    printf("Civil time: %s\n", civil_time);

    return 0;
}

char *timeConversion(char *s)
{
    char *military = create_military_hour(s);

    fill_military_hour(military, s);

    char num_1 = military[0], num_2 = military[1];

    char *to_str_num_1 = NULL;
    char *to_str_num_2 = NULL;

    to_str_num_1 = to_str_char(num_1);
    to_str_num_2 = to_str_char(num_2);

    char concatenated[3];

    strcpy(concatenated, to_str_num_1);
    strcat(concatenated, to_str_num_2);

    int integer = to_int(concatenated);

    char *to_str_integer = NULL;

    if (!is_am(s) && integer != 12 || integer == 12 && is_am(s))
    {
        integer += 12;

        if (integer == 24)
        {
            integer = 0;
        }
    }

    to_str_integer = to_str_int(integer);

    if (integer + '0' == to_str_integer[0])
    {
        to_str_integer[0] = '0';
    }

    printf("%s\n", to_str_integer);

    military[0] = to_str_integer[0];
    military[1] = to_str_integer[1];

    return military;
}

void fill_military_hour(char *military, char *civil_time)
{
    unsigned int index = 0;

    while (index < strlen(civil_time) - 2)
    {
        military[index] = civil_time[index];
        index++;
    }
}

char *create_military_hour(char *hour)
{
    return (char *) malloc(strlen(hour) - 2);
}

int is_am(char *hour)
{
    return hour[strlen(hour) - 2] == 'A';
}

char *to_str_char(char c)
{
    char *str = malloc(sizeof(char) + 1);

    str[0] = c;
    str[1] = '\0';

    return str;
}

int to_int(char *s)
{
    return atoi(s);
}

char *to_str_int(int n)
{
    char *result = malloc(sizeof(char) * 3 + 1);

    int first, last;

    first = n;

    while (first >= 10)
    {
        first /= 10;
    }

    last = n % 10;

    result[0] = (char) (first + '0');
    result[1] = (char) (last + '0');
    result[2] = '\0';

    return result;
}