#include "main.h"

/**
 * str_len - Find the length of a string
 * @string: the string
 *
 * Return: the length of the string.
 */
int str_len(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, len1;
	char temp;

	len = str_len(s);
	len1 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1--] = temp;
	}
}

