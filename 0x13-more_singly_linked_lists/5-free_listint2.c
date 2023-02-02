#include "lists.h"

/**
 * free_listint2 - free a listint_t list.
 * @head: head node.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head != NULL)
	{
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
	}
}
