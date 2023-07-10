#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: row
 * @height: column
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int *subarr, **arr, i = 0, j;

	arr = malloc(sizeof(int *) * height);
	if (!arr)
		return (NULL);
	while (i < height)
	{
		j = 0;
		subarr = malloc(sizeof(int) * width);
		if (!subarr)
			return (NULL);
		while (j < width)
			subarr[j++] = 0;
		arr[i++] = subarr;
	}
	return (arr);
}
