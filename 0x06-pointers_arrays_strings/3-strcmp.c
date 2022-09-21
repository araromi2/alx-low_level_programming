#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, l, result;

	result = 0;
	k = 0;
	l = 0;
	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[l] != '\0')
	{
		l++;
	}
	for (i = 0, j = 0; i <= k && j <= l; i++, j++)
	{
		if ((s1[i] - s2[j]) == 0)
			continue;
		else
		{
			result = s1[i] - s2[j];
			break;
		}
	}
	return (result);
}

