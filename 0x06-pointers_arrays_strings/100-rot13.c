#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * return: encoded characters/string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = 'A' + (s[i] - 'A' + 13) % 26;
		else if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 'a' + (s[i] - 'a' + 13) % 26;
	}
	return (s);
}

