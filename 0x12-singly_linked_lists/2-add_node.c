#include "lists.h"
/**
 * add_node - adds a new node ath the beginning of a list_t list
 * @head: the head of the list
 * @str: string to insert
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
