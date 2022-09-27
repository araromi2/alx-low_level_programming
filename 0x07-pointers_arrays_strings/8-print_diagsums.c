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
	int i, j;
	int *b;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				b = a + (i * size + j);
				sum1 += *b;
			}
			if (j == (size - 1 - i))
			{
				b = a + (i * size + j);
				sum2 += *b;
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

