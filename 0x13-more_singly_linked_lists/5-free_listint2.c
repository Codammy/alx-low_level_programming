#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees listint_t list.
 *
 * @head: pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
