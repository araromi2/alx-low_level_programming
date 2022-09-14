#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int sum, n1, n2, c;

	sum = 0;
	n1 = 1;
	n2 = 2;
	while (n2 <= 4000000)
	{
		if ((n2 % 2) == 0)
			sum += n2;
		c = n1;
		n1 = n2;
		n2 += c;
	}
	printf("%ld\n", sum);
	return (0);
}

