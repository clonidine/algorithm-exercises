#include <stdio.h>
#include <stdlib.h>

int to_uppercase(char *str);

int count_vowels(char *str);

char *read_line(void);

size_t get_len(char *str);

int main()
{
    char *str = read_line();

    int vowels = count_vowels(str);

    printf("Vowels: %i", vowels);

    return 0;
}

int to_uppercase(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }

    char *ptr = str;
    int code;

    while (*ptr)
    {
        if (*ptr >= 97 && *ptr <= 122)
        {
            code = (unsigned char) *ptr;
            *ptr = code - 32;
        }

        ptr++;
    }

    return 1;
}

int count_vowels(char *str)
{

    const int size = 5;

    int success = to_uppercase(str);

    if (!success)
    {
        return -1;
    }

    char *ptr = str;

    int vowels = 0;

    char hit_vowels[size];

    char vowels_mapping[] = {'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < get_len(str); j++)
        {
            if (*ptr == vowels_mapping[i] && *ptr != hit_vowels[i])
            {
                vowels++;

                hit_vowels[i] = *ptr;
            }

            ptr++;
        }

        ptr = &str[0];
    }

    return vowels;
}

char *read_line(void)
{
    char *str = NULL;

    char character;
    int index = 0;

    do
    {
        character = (char) fgetc(stdin);
        str = (char *) realloc(str, sizeof(char) * (index + 1));
        str[index++] = character;
    } while (character != 10);

    str[index - 1] = '\0';

    return str;
}

size_t get_len(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        ptr++;
    }

    return ptr - str;
}


