/* 100-main_opcodes.c */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: The number of arguments
 * @argv: The argument vector
 *
 * Return: 0 on success, exit with status 1 or 2 on error
 */
int main(int argc, char *argv[])
{
int bytes, i;

if (argc != 2)
{
printf("Error\n");
return (1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}
for (i = 0; i < bytes; i++)
{
printf("%02x", ((unsigned char *)main)[i]);
if (i < bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
