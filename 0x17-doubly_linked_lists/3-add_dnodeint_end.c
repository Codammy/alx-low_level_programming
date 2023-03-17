#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * 
 * @head: pointer to head.
 * @n: element to add
 * Return: address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_nd;
       
	new_nd = malloc(sizeof(dlistint_t));
	if  (new_nd == NULL)
		return NULL;
	tmp = *head;

	if ((*head) == NULL)
		*head = new_nd;
	else
	{
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_nd->n = n;
	new_nd->prev = tmp;
	new_nd->next = NULL;
	tmp->next = new_nd;
	}
	return (new_nd);
}
