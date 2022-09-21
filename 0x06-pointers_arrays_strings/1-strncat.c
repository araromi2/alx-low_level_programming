#include "main.h"

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
	int j, i;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	if (i < n)
		dest[j + i] = '\0';
	return (dest);
}

