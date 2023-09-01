#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = _strlen(s);
return (check_palindrome(s, 0, length - 1));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - Recursive function to check palindrome.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}
