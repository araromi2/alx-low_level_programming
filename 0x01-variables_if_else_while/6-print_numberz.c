#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
