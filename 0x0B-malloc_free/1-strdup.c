#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory
 * @str: the string to duplicate
 *
 * Return: NULL if it failed and the pointer to the copied string if success
 */
char *_strdup(char *str)
{
	int i, len;
	char *copy_str;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	copy_str = malloc(sizeof(char) * (len + 1));
	if (copy_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		copy_str[i] = str[i];
	}
	return (copy_str);
}

