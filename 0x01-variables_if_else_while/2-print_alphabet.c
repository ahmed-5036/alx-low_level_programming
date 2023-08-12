#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the lowercase and uppercase alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
