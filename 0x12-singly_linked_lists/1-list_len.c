#include "lists.h"

/**
 * list_len - function that returns the number of nodes
 *
 * @h: head node(starrting point).
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
