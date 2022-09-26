#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string memory space to fill
 * @b: what to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i;

	i = s + n;
	while(s < i)
	{
		*s = b;
		s++;
	}
	return (s);
}

