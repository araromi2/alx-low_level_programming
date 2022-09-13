#include <stdio.h>
#include "main.h"

/**
 * main - Entry function, prints "_putchar"
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "_putchar";
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}

