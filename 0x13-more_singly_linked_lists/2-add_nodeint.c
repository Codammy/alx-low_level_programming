#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: head
 * @n: number of elements
 *
 * Return: address of new element or null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new	== NULL)
		return (0);
	(*new).n = n;
	(*new).next = *head;
	*head = new;

	return (*head);

}
