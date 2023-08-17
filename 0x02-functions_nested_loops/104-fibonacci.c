#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, max;
	unsigned long int a = 1, b = 2, c;

	count = 2;
	max = 98;

	printf("%lu, %lu, ", a, b);

	while (count < max)
	{
		c = a + b;
		printf("%lu", c);
		if (count < max - 1)
			printf(", ");
		a = b;
		b = c;
		count++;
	}

	printf("\n");

	return (0);
}
