#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: number of arguments to the program
 * @av: an array of pointer to the arguments.
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, k, len;

	len = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			len++;
		len++;
	}
	string = malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			*(string + k) = *(*(av + i) + j);
			k++;
		}
		*(string + k) = '\n';
		k++;
	}
	return (string);
}

