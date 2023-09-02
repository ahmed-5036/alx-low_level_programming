#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if invalid arguments
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
int num = 0;
int j = 0;

while (arg[j] != '\0')
{
if (arg[j] < '0' || arg[j] > '9')
{
printf("Error\n");
return (1);
}
num = num * 10 + (arg[j] - '0');
j++;
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
