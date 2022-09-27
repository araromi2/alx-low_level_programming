#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: multidimensional array
 * @size: size of the square matrix
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i , j;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i * size + j];
			if (j == (size - 1 - i))
				sum2 += a[i * size + j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

