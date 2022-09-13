#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
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
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < n + 1; j++)
		{
			mult = i * j;
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

