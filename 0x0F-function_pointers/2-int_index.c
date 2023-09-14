#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: The array to search.
 * @size: The size of the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: Index of the first matching element; -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
