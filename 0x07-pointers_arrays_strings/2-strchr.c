#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to look for
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

