#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * Description: This function prints the last digit of a number,
 * preceded by a plus sign for positive numbers.
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
