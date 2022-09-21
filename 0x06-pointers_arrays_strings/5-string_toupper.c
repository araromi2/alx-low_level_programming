#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 *
 * Return: the changed string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] -= 32;
	}
	return (s);
}

