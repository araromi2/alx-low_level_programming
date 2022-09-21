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
 * _strncat - concatenates two strings at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: bytes to concatenate
 *
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = _strlen(dest);
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len + i] = src[i];
	}
	if (i < n)
		dest[len + i] = '\0';
	return (dest);
}

