/*
 * File: 3-islower.c
 * Author: Michael Aoworade <Ayoaro85@gmail.com>
 */
#include "main.h"
/**
 * _is_lower - check for lowercase character
 * @: The character to be checked.
 *
 * Return : 1 if character is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
