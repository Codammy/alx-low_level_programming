#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list
 *
 * @head: ptr to first node.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		if (head->str)
			free(head->str);
		tmp = (*head).next;
		free(head);
		head = tmp;
	}
}
