#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, word_count = 0, len = 0;

if (str == NULL || *str == '\0')
return (NULL);
/* Count the number of words in the input string */
for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
word_count++;
}
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);
for (i = 0; i < word_count; i++)
{
while (*str == ' ')
str++;
for (len = 0; str[len] && str[len] != ' '; len++)
;
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[i][k] = *str++;
words[i][k] = '\0';
}
words[word_count] = NULL;
return (words);
}
