#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: alphabet
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

