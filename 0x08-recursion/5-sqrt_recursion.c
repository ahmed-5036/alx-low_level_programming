i#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (calculate_sqrt(n, n / 2));
}

/**
 * calculate_sqrt - Recursive function to calculate square root.
 * @n: The input number.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n, or -1 if not found.
 */
int calculate_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess == 0)
return (-1);
return (calculate_sqrt(n, guess - 1));
}
