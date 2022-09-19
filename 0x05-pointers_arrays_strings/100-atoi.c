#include "main.h"

/**
 * _atoi - conver a string to an integer
 * @s: string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i, sign, num;

	i = 0;
	sign = 1;
	num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (sign * num);
}

