#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - for a value in an array using Linear search algo
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int c = 0;

	while (array && (c < size))
	{
		printf("Value checked array[%d] = [%d]\n", c, *array);
		if (*array == value)
			return (c);
		array = (array + 1); /* computer knows where to start incrementing*/
		c++;
	}
	return (-1);
}
