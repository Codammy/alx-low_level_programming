#include "lists.h"

/** free-listint - free a listint_t list.
 * @head: head node.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;
	while ((*head).next != NULL)
	{
		tmp = (*head).next;
		free(head);
		head = tmp;
	}
	free(head);
}
