#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to head node
 * @str: string element to add.
 * Return: new node or NUll if failed;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_last, *tmp;

	if (!head)
		return (NULL);
	/* creates new node */
	new_last = malloc(sizeof(list_t));
	if (!new_last)
		return (NULL);
	if (str)
	{
		new_last->str = strdup(str);
		new_last->len = strlen(str);
	}
	new_last->next = NULL;

	/* if list isn empty */
	if (!(*head))
		*head = new_last;
	/* if not iterate to the lasy node and append*/
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = (*tmp).next;
		tmp->next = new_last;
	}

	return (new_last);
}
