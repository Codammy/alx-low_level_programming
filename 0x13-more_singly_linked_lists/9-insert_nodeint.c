#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a specific index
 *
 * @head: ptr to list.
 * @idx: index to insert at.
 * @n: value to insert to node.
 * Return: new_node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp, *prev;
	unsigned int curr = 1, sig = 0;

	if (!head || ((int)idx < 0))
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!(*head))
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp)
	{
		if (idx == (curr - 1))
		{
			node->next = tmp;
			if (idx == 0)
				*head = node;
			else
				prev->next = node;
			return (node);
		}
		sig = 1;
		curr++;
		prev = tmp;
		tmp = tmp->next;
	}
	if (!sig)
		return (NULL);
	return (node);
}
