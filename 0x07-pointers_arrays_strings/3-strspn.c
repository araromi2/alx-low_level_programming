#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to be used to check.
 *
 * Return: the number of bytes in the initial segment of s which consist only of
 * bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, total, check;

	total = 0;
	check = 0;
	for (i = 0; s[i] != '\0'; i++)
	{

		check = total;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				total++;
				break;
			}
		}
		if (total == check)
			break;
	}
	return (total);
}

