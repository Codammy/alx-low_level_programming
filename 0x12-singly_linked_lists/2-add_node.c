#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  Function that adds a new node at the beginning of a list_t list.
 *
 * @head: Begins the list.
 * @str: string.
 * Return: new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL )
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
