#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to check
 *
 * Description: This function checks if the given character is an
 *  alphabetic character (lowercase or uppercase).
 *
 * Return: 1 if alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
