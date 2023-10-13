#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to list
 * @idx: index to insert new node.
 * @n: value to add.
 * Return: new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h;
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (head == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	while (head)
	{
		if (i == idx)
		{
			new->prev = tmp;
			new->next = head;
			head->prev = new;
			if (i == 0)
				*h = new;
			else
				tmp->next = new;
			return (new);
		}
		i++;
		tmp = head;
		head = head->next;
	}
	return (NULL);
}
