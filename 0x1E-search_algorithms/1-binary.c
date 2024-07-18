#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search -  searches for a value using Binary search algorithm
 *
 * @array: pointer to first array value.
 * @size: number of element in the array.
 * @value: value to search for.
 * Return: value index i.e position the then array.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, mid, left = 0, right = size - 1;
	int cur;

	for (i = 0; i < size; i++)
	{
		print_search(array + left, (size_t)sizeof(array));
		mid = (left + right) / 2;
		cur = *(array + mid);

		if (cur == value)
			return mid;
		else if (cur < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

void print_search(int *arr, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i < size)
			printf(", ");
	}
	putchar('\n');
}
