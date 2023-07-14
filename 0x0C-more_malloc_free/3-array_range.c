#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 *
 * @min: fro
 * @max: to
 * Return: new array or null
 */
int *array_range(int min, int max)
{
	int *array, i, j, tmp;

	if (min > max)
		return (NULL);
	tmp = min;
	i = 0;
	while (tmp <= max)
	{
		tmp++;
		i++;
	}
	array = calloc(i, sizeof(int));
	j = 0;
	while (j < i)
		array[j++] = min++;

	return (array);
}
