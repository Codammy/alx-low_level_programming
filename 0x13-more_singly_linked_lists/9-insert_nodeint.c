#include <stdlib.h>
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
	listint_t *node, *tmp, *tm_p;
	unsigned int curr = 0;

	if (!head || (idx < 0))
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	tmp = *head;
	while (tmp)
	{
		if (curr == idx)
		{
			tm_p = tmp->next;
			tmp->next = node;
			node->next = tm_p;
			return (node);
		}
		curr++;
		tmp = tmp->next;
	}
	return (NULL);
}
