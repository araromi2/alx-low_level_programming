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
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = str_len(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

