#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element
 * @size: size of array
 * @value: value to search for.
 * Return: first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, jump, index;

	if (!array)
		return (-1);

	step = sqrt(size);
	for (index = 0; index < size; index += step)
	{
		if (array[index] >= value)
		{
			printf("Value found between indexes[%ld] and [%ld]\n", jump, index);
			while (jump <= index)
			{
				printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
				if (array[jump] == value)
					return (jump);
				jump++;
			}
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		jump = index;
	}
	printf("Value found between indexes[%ld] and [%ld]\n", jump, index);
	while (jump < size)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		jump++;
	}

	return (-1);
}
