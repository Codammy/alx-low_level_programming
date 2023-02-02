#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head node
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *i;

	if (head == 0)
		return;
	i = head;
	while (i->next != NULL)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
	free(head->str);
	free(head);
}
