#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n'); /* Print newline when the string is empty */
return;
}
_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recursively call with the next character */
}
