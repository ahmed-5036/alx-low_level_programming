#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n < 98; n++)
if (n < 10)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
{
for (n = n; n > 98; n--)
if (n >= 100)
{
_putchar(n / 100 + '0');
_putchar((n % 100) / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
_putchar('\n');
}
