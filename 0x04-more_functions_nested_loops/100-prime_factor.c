#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long n = 612852475143;
unsigned long largest_factor = 2;

while (n > 1)
{
if (n % largest_factor == 0)
n /= largest_factor;
else
largest_factor++;
}
printf("%lu\n", largest_factor);
return (0);
}
