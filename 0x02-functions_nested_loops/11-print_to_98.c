#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * Description: Prints all numbers from n to 98, separated by commas.
 *              The function handles ascending and descending ranges.
 *
 * @n: Starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            _putchar('0' + (n / 10));
            _putchar('0' + (n % 10));

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            _putchar('0' + (n / 100));
            _putchar('0' + ((n / 10) % 10));
            _putchar('0' + (n % 10));

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }

            n--;
        }
    }

    _putchar('\n');
}
