#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of elem.
 *
 * @head: first node
 * Return: sum of elem in list.
 */
int sum_listint(listint_t *head)
{
	size_t no = 0;

	while (head)
	{
		no += head->n;
		head = head->next;
	}
	return (no);
}
