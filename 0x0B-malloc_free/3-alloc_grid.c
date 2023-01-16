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
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * width);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}
	}

	for (j = i; j < height; j++)
		ptr[i][j] = 0;

	return (ptr);
}
