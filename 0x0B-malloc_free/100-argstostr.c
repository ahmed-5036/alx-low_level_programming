#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len = 0, total_len = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* Add space after each argument */
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (k = 0; av[i][k]; k++)
str[total_len++] = av[i][k];
str[total_len++] = '\n'; /* Add newline after each argument */
}
str[len] = '\0'; /* Null-terminate the string */
return (str);
}
