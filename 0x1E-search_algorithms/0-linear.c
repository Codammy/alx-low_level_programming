#include "search_algos.h"

/**
 * linear_search - returns the index of a value in a list.
 *
 * @array: pointer to first item in the list
 * @size: size of the list
 * @value: value to search
 * Return: -1 on Failure.
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d] - %p\n", i, *array, array);
		if ((*array) == value)
			return (i);
		array++;
		i++;
	}

	return (-1);
}
