#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
for (int i = (length + 1) / 2; i < length; i++)
_putchar(str[i]);
_putchar('\n');
}
