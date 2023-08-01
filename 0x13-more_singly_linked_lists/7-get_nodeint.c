#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index.
 *
 * @h: first node
 * @index: index
 * Return: node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t no = 0;

	while (head)
	{
		if (no == index)
			return (head);
		head = head->next;
		no++;
	}
	return (NULL);
}
