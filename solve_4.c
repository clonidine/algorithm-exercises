#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *to_uppercase(char *str)
{
    char *ptr = str;
    int code;

    for (int i = 0; i < strlen(str); i++)
    {
        if (*ptr >= 97 && *ptr <= 122)
        {
            code = (unsigned char) *ptr;
            *ptr = code - 32;
        }

        ptr++;
    }

    return ptr;
}


int read_vowels(char *str, size_t length)
{

    const int size = 5;

    to_uppercase(str);

    char *ptr = str;

    int vowels = 0;

    char hit_vowels[size];

    char vowels_mapping[] = {'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < length; j++)
        {

            if (*ptr == vowels_mapping[i] && *str != hit_vowels[i])
            {
                vowels++;

                hit_vowels[i] = *str;
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

int main()
{
    char *str = read_line();
    size_t length = strlen(str);

    int vowels = read_vowels(str, length);

    printf("Vowels: %i", vowels);
    return 0;
}
