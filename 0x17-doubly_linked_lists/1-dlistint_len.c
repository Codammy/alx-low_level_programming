#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 *
 * @h: first node
 * Return: number oof nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeln = 0;

	while (h != NULL)
	{
		nodeln++;
		h = (*h).next;
	}
	return (nodeln);
}
