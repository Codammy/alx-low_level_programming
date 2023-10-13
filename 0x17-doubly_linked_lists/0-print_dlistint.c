#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
/**	dlistint_t *tmp;*/
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
