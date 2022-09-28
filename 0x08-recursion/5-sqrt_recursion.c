#include "main.h"

/**
 * sqrt_help - helper function for _sqrt_recursion
 * @n: the number to find the square root
 * @i: number to check whether it is the square root.
 *
 * Return: the square root.
 */
int sqrt_help(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_help(n, i + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number.
 * @n: number
 *
 * Return: -1 if the number does not have a natural square root and
 * 1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (sqrt_help(n, 1));
}

