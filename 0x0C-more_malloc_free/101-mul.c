#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void *_calloc(unsigned int nmemb, unsigned int size);
int _strlen(int *s);
char *_strrev(char *s);
int *multiply_index(char *s1, char *s2);
char *string_product(int *p, char *s1, char *s2);
void errors(void);

/**
 * _calloc - memory allocation with initialization set to 0.
 * @nmemb: number of element.
 * @size: byte size
 *
 * Return: void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}

/**
 * multiply_index - multiply each value of the string correspondingly with the
 * other value.
 * @s1: first string of number
 * @s2: second string of number
 *
 * Return: a pointer to the array of each index multiplication.
 */
int *multiply_index(char *s1, char *s2)
{
	int i, j, len1, len2, *p;

	len1 = strlen(s1);
	len2 = strlen(s2);
	s1 = _strrev(s1);
	s2 = _strrev(s2);
	p = _calloc(len1 + len2, sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			p[i + j] += (s1[i] - '0') * (s2[j] - '0');
		}
	}
	return (p);
}


/**
 * _strrev - reverses a string
 * @s: string to be reversed
 * Return: the reversed string
 */
char *_strrev(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		;
	i--;
	for (j = 0; j < i; j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
	}
	return (s);
}

/**
 * string_product - converts an array of integers into a st
 * @p: array of integers
 * @s1: first string
 * @s2: second string.
 * Return: the product of the strings
 */
char *string_product(int *p, char *s1, char *s2)
{
	int i, j, len, *p2;
	char *s;

	len = strlen(s1) + strlen(s2);
	p2 = _calloc(len, sizeof(int));
	if (p2 == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p2[i] = p[i] % 10;
		if (i + 1 < len)
			p[i + 1] += p[i] / 10;
	}
	s = _calloc(len + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		s[j] = p2[len - j - 1] + '0';
	return (s);
}

/**
 * errors - handles errors for main
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int *p, i, j;
	char *s;

	if (argc != 3)
	{
		errors();
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				errors();
			}
		}
	}
	p = multiply_index(argv[1], argv[2]);
	s = string_product(p, argv[1], argv[2]);
	while (s)
	{
		if (s[0] == '0')
			s++;
		else
			break;
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
