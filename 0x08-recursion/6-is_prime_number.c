#include "main.h"

/**
 * is_prime_helper - Recursive helper function for prime number check.
 * @n: The input number.
 * @divisor: The current divisor to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The input number.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n <= 3)
return (1);
return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function for prime number check.
 * @n: The input number.
 * @divisor: The current divisor to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (divisor > n / 2)
return (1);
if (n % divisor == 0)
return (0);
return (is_prime_helper(n, divisor + 1));
}
