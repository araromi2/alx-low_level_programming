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
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len, half_len;

	len = str_len(str);
	if ((len % 2) == 0)
		half_len = len / 2;
	else
		half_len = ((len - 1) / 2) + 1;

	for (i = half_len; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
