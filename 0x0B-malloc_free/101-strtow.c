#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in a string
 * @str: string
 *
 * Return: count of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 1; *(str + i) != '\0'; i++)
	{
		if ((*(str + i) == ' ' && *(str + i) == '\t' &&
		*(str + i) == '\n') && (*(str + i - 1) != ' ' &&
		*(str + i - 1) != '\t' && *(str + i - 1) != '\n'))
			count++;
	}
	if (*(str + i - 1) != ' ' && *(str + i - 1) != '\t' &&
	*(str + i - 1) != '\n')
		count++;
	return (count);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **p;
	int i, j, l, m, n, count;

	if (str == NULL)
		return (NULL);
	count = count_words(str);
	p = malloc(sizeof(char *) * (count + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ' && *(str + i) != '\t'
		&& *(str + i) != '\n')
		{
			for (l = i; *(str + l) != ' ' && str[l] != '\t' &&
			str[l] != '\n' && str[l] != '\0'; l++)
				;
			p[j] = malloc(sizeof(char) * (l - i + 1));
			if (p[j] == NULL)
			{
				for (m = 0; m < j; m++)
					free(p[m]);
				free(p);
				return (NULL);
			}
			for (n = 0; n < l - i; n++)
				p[j][n] = str[i + n];
			p[j][n] = '\0';
			j++;
			i = l;
		}
	}
	p[j] = NULL;
	return (p);
}
