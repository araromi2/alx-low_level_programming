#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = 0; j < 10; j++)
			{
				if (i + j < size)
					printf("%02x", b[i + j]);
				else
					printf("  ");
				if (j % 2)
					printf(" ");
			}
			for (k = 0; k < 10; k++)
			{
				if (i + k < size)
				{
					if (b[i + k] >= 32 && b[i + k] <= 126)
						printf("%c", b[i + k]);
					else
						printf(".");
				}
			}
			printf("\n");
		}
	}
}
