#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a list.
 *
 * @h: first node
 * Return: no. of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		h = h->next;
		no++;
	}
	return (no);
}
