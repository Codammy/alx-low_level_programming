#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  Function that adds a new node at the end of a list_t list.
 *
 * @head: Begins the list.
 * @str: string.
 * Return: new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	*head = new_node;
	list_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	last_node->next = new_node;

	return (*head);
}
