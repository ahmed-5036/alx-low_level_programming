/*
 * File : 4-isalpha.c
 * Author: Michael Aroworade <Ayoaro85@gmail.com>
 */
#include "main.h"
/**
 * _isalpha - check if a character is an alphabetic.
 * @c: character to check
 *
 * Return: 1 if its alphabetic 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
