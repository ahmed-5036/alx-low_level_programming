#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to reverse
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
int temp;
int i, j;

for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
