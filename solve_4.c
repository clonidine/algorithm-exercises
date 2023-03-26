#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_vowels(const char *str, size_t length)
{

    const char *ptr = str;

    int vowels = 0;
    char hit_vowels[5];

    char vowels_mapping[] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < 5; i++)
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
    const char *str = read_line();
    size_t length = strlen(str);

    int vowels = read_vowels(str, length);

    printf("Vowels: %i", vowels);
    return 0;
}
