#include "search_algos.h"

/**
 * print_array - prints the array being searched
 *
 * @arr: pointer to arr.
 * @start: start point
 * @len: stop point.
 */
void print_array(int *arr, int start, int len)
{
	int i = start;

	while (i < len)
	{
		printf("%d", arr[i]);
		if (len > (i + 1))
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a list using Binary search
 *
 * @array: pointer to the first element of the list
 * @size: size of the list
 * @value: the value being searched
 *
 * Return: -1 on failure.
 */
int binary_search(int *array, size_t size, int value)
{
	int lower = 0;
	int upper = size - 1;
	int target, mid = 0;

	while (lower <= upper)
	{
		printf("Searching in array: ");
		print_array(array, lower, upper + 1);
		mid = lower + (upper - lower) / 2;
		target = array[mid];

		if (target == value)
			return (mid);
		if (target > value)
			upper = mid - 1;
		else
			lower = mid + 1;
	}
	return (-1);
}
