#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head node.
 *
 * Return: 0.
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	val = (**head).n;
	*head = (**head).next;
	free(temp);
	return (val);
}
