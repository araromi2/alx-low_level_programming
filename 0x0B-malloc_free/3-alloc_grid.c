#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 * integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: the array and NULL if the program fail.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(sizeof(int) * width);
		if (*(arr + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(arr + j));
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(arr + i) + j) = 0;
		}
	}
	return (arr);
}

