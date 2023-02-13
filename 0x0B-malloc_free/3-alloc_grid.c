#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * @width: array rows
 * @height: columns
 *
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i,  j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc((sizeof(int *) * width) / sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
	ptr[i] = (int *) malloc((sizeof(int) * height) / sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	for (j = 0; j < width; j++)
		ptr[i][j] = 0;
	}

	return (ptr);
}
