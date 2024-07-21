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
	unsigned int mid, left = 0, right = size - 1;
	int cur;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_search(array, left, right);
		mid = (left + right) / 2;
		cur = *(array + mid);

		if (cur == value)
		{
			return (mid);
		}
		else if (cur <= value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

/**
 * print_search - prints a searched result
 *
 * @arr: pointer to first element.
 * @left: left most pointer
 * @right: right most pointer
 */
void print_search(int *arr, unsigned int left, unsigned int right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", arr[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
