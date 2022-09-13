#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: signed int
 *
 * Return: unsigned int
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
