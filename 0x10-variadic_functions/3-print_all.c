#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
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
printf("\n");
}
