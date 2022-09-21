#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int j, k;
	int character[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
		')', '{', '}'};

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 13; k++)
		{
			if (s[j] == character[k] && s[j + 1] != '\0')
			{
				if((s[j + 1] >= 'a') && (s[j + 1] <= 'z'))
				{
					s[j + 1] -= 32;
				}
				break;
			}
		}
	}
	return (s);
}
