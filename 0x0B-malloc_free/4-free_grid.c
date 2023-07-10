#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 *
 * @grid: array of array
 * @height: height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);

	free(grid);
}
