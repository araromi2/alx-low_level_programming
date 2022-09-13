#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: a char 
 *
 * Return: 1 if c is a letter, lowecase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

