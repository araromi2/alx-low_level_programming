#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: the address of the pointer to the first node
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}

