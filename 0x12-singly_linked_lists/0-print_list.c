#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the pointer to the structure of node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t const *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}

