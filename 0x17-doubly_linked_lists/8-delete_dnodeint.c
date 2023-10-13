#include "lists.h"

/**
 * delete_dnodeint_at_index - removes node at a given position.
 *
 * @head: pointer to list
 * @index: index to insert new node.
 * Return: 1 on Sucesss.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	dlistint_t *tmp;
	unsigned int i = 0;

	while (h)
	{
		if (i == index)
		{
			tmp->prev->next = h;
			h->prev = tmp;
			free(tmp);
			return (1);
		}
		i++;
		tmp = h;
		h = h->next;
	}
	return (-1);
}
