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

	if (*head == NULL)
		return (0);
	val = (**head).n;

	return (val);
}
