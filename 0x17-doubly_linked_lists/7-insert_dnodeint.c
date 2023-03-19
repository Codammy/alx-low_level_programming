#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to firts node address.
 * @idx: index.
 * @n: data to insert.
 * Return: new node else null.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp = *h;
	unsigned int count;

	newNode = malloc(sizeof(*h));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (tmp == NULL && idx == 0)
	{
		*h = newNode;
		return (*h);
	}

	for (count = 0; count <= idx; count++)
	{
		if (count == (idx - 1))
		{
			newNode->prev = tmp;
			newNode->next = tmp->next;
			tmp->next = newNode;
		}
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	return (newNode);
}
