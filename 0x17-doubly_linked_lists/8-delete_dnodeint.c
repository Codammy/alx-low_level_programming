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
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (i == index)
		{
			if (index == 0)
			{
				if (h->next == NULL)
				{
					return (1);
				}
				else
					*head = h->next;
				h->next->prev = NULL;
			}
			else
			{
				h->prev->next = h->next;
				h->next->prev = h->prev;
			}
			free(h);
			return (1);
		}
		h = h->next;
	}
	return (-1);
}
