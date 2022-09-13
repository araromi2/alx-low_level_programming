#include "main.h"

/**
 * print_alphabet - Print all alphabet in lowe case
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}

