#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a specific index.
 *
 * @head: ptr to list.
 * @index: index to delete from.
 * Return: 1 on Success.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *tmp, *tm_p;
	unsigned int curr = 0;

	if (!head || (index < 0))
		return (-1);
	if (curr == index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	tmp = (*head)->next;
	prev = *head;
	while (tmp)
	{
		if (curr == index)
		{
			tm_p = tmp->next;
			prev->next = tm_p;
			free(tmp);
			return (1);
		}
		curr++;
		prev = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
