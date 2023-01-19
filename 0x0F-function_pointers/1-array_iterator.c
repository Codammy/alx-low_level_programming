#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: arrays address
 * @size: array size
 * @action: pointer to function to be executed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL || action != NULL)
	{
	unsigned int count = 0;
	int index;

	while (count < size)
	{
		index = array[count];
		action(index);
		count++;
	}
	}
}
