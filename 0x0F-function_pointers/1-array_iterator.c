#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on an array.
 *
 * @size: array size
 * @array: array.
 * @action: pointer to funcs
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
