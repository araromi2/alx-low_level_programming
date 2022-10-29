#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index to set
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= (sizeof(unsigned long int) + 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}

