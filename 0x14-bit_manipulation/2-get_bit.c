#include "main.h"

/**
 * get_bit - find the value of a bit at a given index
 * @n: the value given
 * @index: the index
 *
 * Return: the value of the bit at index or -1 of an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}

