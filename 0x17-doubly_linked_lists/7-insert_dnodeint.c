#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to heads address node
 * @idx: index(position) to ad node.
 * @n: data(int) to add.
 *
 * Return: _newNode else NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *_tmp = *h, *_newNode;
	size_t ln = 0;

	while (_tmp)
	{
		ln++;
		_tmp = _tmp->next;
	}
	_tmp = *h;
	if (idx > (ln - 1))
		return (NULL);
	_newNode = malloc(sizeof(*h));
	if (!_newNode)
		return (NULL);
	ln = 0;
	while (_tmp)
	{
		if (ln == idx)
		{
			(*_tmp->prev).next = _newNode;
			_newNode->prev = _tmp->prev;
		       _newNode->next = _tmp;
		       _newNode->n = n;
			break;
		}
		_tmp = _tmp->next;
		ln++;
	}
	return (_newNode);
}
