#include "lists.h"

/**
 * reverse_listint - reverses a list
 *
 * @head: pointer to list
 * Return: reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *last;
	size_t curr = 0, lim, nodeLen;

	if (!head)
		return (NULL);
	last = *head;
	while (last)
	{
		last = last->next;
		nodeLen++;
	}
	lim = nodeLen;
	while (nodeLen > 0)
	{
		node = *head;
		while (node)
		{
			if (node->next)
			{
			curr = node->n;
			node->n = node->next->n;
			node->next->n = curr;
			}
			if (lim == nodeLen)
				break;
			else if (lim == (nodeLen-1))
			{
				node = *head;
				continue;
			}
			lim--;
			node = node->next;
		}
		nodeLen--;
	}
	return (node);
}
