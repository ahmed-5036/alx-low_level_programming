#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: The number of characters printed (1).
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_all - Prints anything based on a format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str;
unsigned int i = 0;
int separator = 0;
va_start(args, format);
while (format && format[i])
{
if (separator)
_putchar(',');
switch (format[i])
{
case 'c':
_putchar(va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
break;
default:
i++;
continue;
}
separator = 1;
i++;
}
va_end(args);
_putchar('\n');
}
