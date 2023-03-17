#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: first node
 * Return: number oof nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeln = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeln++;
		h = (*h).next;
	}
	return (nodeln);
}
