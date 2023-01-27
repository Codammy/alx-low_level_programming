#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements in a list.
 *
 * @h: head node.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
