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
<<<<<<< HEAD

	for (count = 0; tmp; count++)
	{
		if (count == idx)
		{
			tmp ? (newNode->prev = tmp): (newNode = NULL);
			newNode->next = tmp;
			tmp->next = newNode;
=======
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
>>>>>>> ff2d977a2ccf8433ca89f18a5fefcfea76f3803b
		}
		_tmp = _tmp->next;
		ln++;
		if (_tmp->next == NULL && ln == idx)
		{
			_tmp->next = _newNode;
			_newNode->prev = _tmp;
			_newNode->next = NULL;
			_newNode->n = n;
			break;
		}
	}
	return (_newNode);
}
