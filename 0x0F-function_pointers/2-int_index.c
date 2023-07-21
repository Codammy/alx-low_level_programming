#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: array
 * @size: number of elem in array
 * @cmp: compares number
 * Return: index of the first element that contains val
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
