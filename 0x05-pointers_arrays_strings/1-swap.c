#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int a_temp;

	a_temp = *a;
	*a = *b;
	*b = a_temp;
}
