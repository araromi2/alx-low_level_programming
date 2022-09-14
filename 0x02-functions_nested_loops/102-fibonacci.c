#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int i, n1, n2, c;

	n1 = 1;
	n2 = 2;
	printf("%ld, ", n1);
	printf("%ld, ", n2);
	for (i = 0; i < 48; i++)
	{
		printf("%ld", n1 + n2);
		c = n1;
		n1 = n2;
		n2 += c;
		if (i < 48)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

