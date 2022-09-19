#include "main.h"

/**
 * str_len - Find the length of a string
 * @string: the string
 *
 * Return: the length of the string.
 */
int str_len(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - Prints a string in reverse order
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = str_len(s);
	for (i = len; i >= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}

