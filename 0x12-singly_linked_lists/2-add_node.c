#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to head node
 * @str: string element to add
 * Return: new node;
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (!head)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		new_head->len = strlen(str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
