#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);
while (str[len])
len++;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= len; i++)
duplicate[i] = str[i];
return (duplicate);
}
