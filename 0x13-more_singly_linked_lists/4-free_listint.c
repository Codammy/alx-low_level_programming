#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees listint_t list
 *
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
