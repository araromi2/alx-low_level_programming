#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	if (*ptr)
		return (1);
	else
		return (0);
}


