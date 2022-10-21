#include "lists.h"

/**
 * list_len - find the number of elements in a linked list-t list
 * @h: the linked list_t list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

