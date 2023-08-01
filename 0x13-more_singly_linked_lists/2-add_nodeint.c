#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t.
 *
 * @head: pointer to first node
 * @n: element to add
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
