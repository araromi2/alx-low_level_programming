#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if it failed and the concatenated string otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (s1[i] == '\0')
			break;
		str[i] = s1[i];
	}
	for (j = i; j < len; j++)
	{
		str[j] = s2[j - i];
	}
	return (str);
}

