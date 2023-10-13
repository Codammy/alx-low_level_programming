#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the of a list.
 *
 * @head: pointer to head node;
 * @n: value to add
 * Return: new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	(*new_node).n = n;
	(*new_node).next = NULL;
	(*new_node).prev = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		(*new_node).prev = tmp;
		tmp->next = new_node;
	}
	return (new_node);
}
