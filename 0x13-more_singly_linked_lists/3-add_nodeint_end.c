#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t.
 *
 * @head: pointer to first node
 * @n: element to add
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
