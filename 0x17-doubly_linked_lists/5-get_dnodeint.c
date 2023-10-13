#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t.
 *
 * @head: head node.
 * @index: index of the node, starting from 0
 * Return: node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
