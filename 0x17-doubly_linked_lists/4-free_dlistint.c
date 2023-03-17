#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list..
 *
 * @head: first node
 * Return: void.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
