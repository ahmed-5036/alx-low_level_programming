#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1); /* Subtract 1 to exclude program name */
return (0);
}
