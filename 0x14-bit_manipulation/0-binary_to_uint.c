#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string pointing to a string of 0 and 1
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		;
	}
	i--;
	for (j = 0; b[j] != '\0'; j++)
	{
		sum += (b[j] - '0') << i;
		i--;
	}
	return (sum);
}

