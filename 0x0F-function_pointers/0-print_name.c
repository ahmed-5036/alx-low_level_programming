#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: The name to be printed.
 * @f: A function pointer that specifies how to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
