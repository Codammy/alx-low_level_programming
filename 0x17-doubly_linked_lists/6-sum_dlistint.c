#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data of a dlistint_t linked list.
 *
 * @head: pointer to head
 * Return: sum of data of dlistint of a linked list..
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
