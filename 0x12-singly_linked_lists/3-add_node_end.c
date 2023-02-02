#include "lists.h"

/**
 * add_node_end -  Function that adds a new node at the end of a list_t list.
 *
 * @head: Begins the list.
 * @str: string.
 * Return: new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp = *head;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	(*node).str = strdup(str);
	(*node).len = strlen(str);
	(*node).next = 0;
	if (*head == NULL)
		*head = node;
	else
	{
		while ((*tmp).next != NULL)
			tmp = (*tmp).next;
		(*tmp).next = node;
	}

	return (node);
}
