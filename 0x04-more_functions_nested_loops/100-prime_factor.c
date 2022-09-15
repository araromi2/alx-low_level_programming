#include <stdio.h>
#include <math.h>
/**
 * main - print the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int n;

	n = 612852475143;
	while ((n % 2) == 0)
	{
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while ((n % i) == 0)
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
