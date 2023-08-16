#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Description: This function prints the sign of a number: + for positive,
 * 0 for zero, - for negative.
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int_sign(int n)
{
if (n == 0)
{
putchar('0');
return (0);
}
else if (n > 0)
{
putchar('+');
return (1);
}
else
{
putchar('-');
return (-1);
}
}
