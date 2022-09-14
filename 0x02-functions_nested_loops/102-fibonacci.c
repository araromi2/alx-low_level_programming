#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, n1, n2, c;

	n1 = 1;
	n2 = 2;
	printf("%d, ", n1);
	printf("%d, ", n2);
	for (i = 0; i < 49; i++)
	{
		printf("%d", n1 + n2);
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

