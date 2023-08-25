#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr)
ptr++;
while (*src && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
*ptr = '\0';
return (dest);
}
