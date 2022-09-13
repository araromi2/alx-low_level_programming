#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 10; j++)
		{
			mult = i * j;
			if ((mult / 10) == 0)
			{
				_putchar(' ');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
