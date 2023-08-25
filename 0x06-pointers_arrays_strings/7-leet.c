#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Input string
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *s)
{
    char *ptr = s;
    char leetMap[256] = {0};

    leetMap['a'] = '4';
    leetMap['A'] = '4';
    leetMap['e'] = '3';
    leetMap['E'] = '3';
    leetMap['o'] = '0';
    leetMap['O'] = '0';
    leetMap['t'] = '7';
    leetMap['T'] = '7';
    leetMap['l'] = '1';
    leetMap['L'] = '1';

    while (*ptr)
    {
        if (leetMap[*ptr])
            *ptr = leetMap[*ptr];
        ptr++;
    }

    return s;
}
