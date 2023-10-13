#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of dlistint_t.
 *
 * @head: head node
 * Return: sum all data in list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
