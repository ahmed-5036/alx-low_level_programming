#include <stdio.h>
/**
*main - Entry point
*Description:program that prints the lowercase alphabet in reverse,
*followed by a new line.
*Return: Always 0 (Success)
*/
int main(void)
{
int letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
