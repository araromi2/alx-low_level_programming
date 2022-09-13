#include "main.h"

/**
 * check_mult - Check multiplicity
 * @mult: number multiplied
 *
 * Return: void.
 */
void check_mult(int mult)
{
		if ((mult / 100) == 0)
		{
			_putchar(' ');
			if (((mult % 100) / 10) == 0)
			{
				_putchar(' ');
				_putchar((mult % 100) % 10 + '0');
			}
			else
			{
				_putchar((mult % 100) / 10 + '0');
				_putchar((mult % 100) % 10 + '0');
			}
		}
		else
		{
			_putchar(mult / 100 + '0');
			_putchar((mult % 100) / 10 + '0');
			_putchar((mult % 100) % 10 + '0');
		}
}

/**
 * print_times_table - prints the 9 times table starting with 0
 * @n: number less than 15 and greater than zero
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mult;

	for (i = 0; i < n + 1; i++)
	{
		if ((n > 15) || (n < 0))
			break;
		if (n == 0)
		{
			_putchar('0');
			_putchar('\n');
			break;
		}
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < n + 1; j++)
		{
			mult = i * j;
			check_mult(mult);
			if (j == n)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

