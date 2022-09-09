#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
