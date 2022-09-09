#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	int hex1;
	int hex2;

	hex1 = '0';
	hex2 = 'a';
	while (hex1 <= '9')
	{
		putchar(hex1);
		hex1++;
	}
	while (hex2 <= 'f')
	{
		putchar(hex2);
		hex2++;
	}
	putchar('\n');
	return (0);
}
