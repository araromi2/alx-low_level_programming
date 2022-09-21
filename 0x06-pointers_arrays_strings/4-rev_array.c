#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, n_, temp;

	n_ = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n_ - i];
		a[n_ - i] = temp;
	}
}

