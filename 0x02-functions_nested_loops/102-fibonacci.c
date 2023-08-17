#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, max;
	long int a = 1, b = 2, c;

	count = 2;
	max = 50;

	printf("%ld, %ld, ", a, b);

	while (count < max)
	{
		c = a + b;
		printf("%ld", c);
		if (count < max - 1)
			printf(", ");
		a = b;
		b = c;
		count++;
	}

	printf("\n");

	return (0);
}
