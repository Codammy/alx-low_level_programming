#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: row
 * height: column
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int *subarr, **arr, i = 0, j = 0;

	arr = malloc(sizeof(subarr) * width);
	if (!arr)
		return (NULL);
	while (i < height)
	{	
		subarr = malloc(sizeof(int) * height);
		if (!subarr)
			return (NULL);
		while (j < height)
			subarr[j++] = 0;
		arr[i++] = subarr;
	}
	return (arr);
}
