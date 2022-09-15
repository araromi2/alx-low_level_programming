#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j, k, l;
	int arr[2];

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');
		}
		for (k = 10; k <= 14; k++)
		{
			arr[0] = k / 10;
			arr[1] = k % 10;
			for (l = 0; l < 2; l++)
			{
				_putchar(arr[l] + '0');
			}
		}
		_putchar('\n');
	}
}
