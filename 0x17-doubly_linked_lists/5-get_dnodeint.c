#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlinked linked list;
 *
 * @head: first node;
 * @index: nth node to return
 *
 * Return: nth index starting from zero else NULL.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t n = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = (*head).next;
		n++;
	}

	return (NULL);
}
