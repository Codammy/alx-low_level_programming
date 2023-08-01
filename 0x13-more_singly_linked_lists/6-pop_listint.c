#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t.
 *
 * @head: pointer to first node
 * Return: node.
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data;

	if (!head || !(*head))
		return (0);

	new_head = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = new_head;
	return (data);
}
