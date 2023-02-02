#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: head
 * @n: node val.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *new_node;
	end_node = malloc(sizeof(listint_t));
	new_node = *head;

	end_node->n = n;
	end_node->next = 0;

	if (*head == 0)
		*head = end_node;
	else
	{
		while ((*new_node).next != NULL)
			new_node = (*new_node).next;
		(*new_node).next = end_node;
	}

	return (end_node);
}
