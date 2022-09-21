#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, len1, len2, result;

	result = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	for (i = 0, j = 0; i <= len1 && j <= len2; i++, j++)
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

