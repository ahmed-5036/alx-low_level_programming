#include <stdio.h>
/**
*main - Entry point
*Description:program that prints all the numbers of base 16 in lowercase,
*followed by a new line.
*Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
while (n < 16)
{
if (n < 10)
putchar(n + '0');
else
putchar(n - 10 + 'a');
n++;
}
putchar('\n');
return (0);
}
