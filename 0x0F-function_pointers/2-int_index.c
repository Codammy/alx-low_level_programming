/**
 * int_index - A function that searches for an integer.
 *
 * @size: is the number of elements in the array
 * @cmp: pointer to function that checks for comparison
 * @array: pointer to array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;
	int index, not_zero, found = 0;

	if (size <= 0)
		return (-1);
	if (array != 0 && cmp != 0)
	{
		while (count < size)
		{
			index = array[count];
			not_zero = cmp(index);
			if (not_zero == 1)
			found += not_zero;
			count++;
		}
		if (found == 0)
			return (-1);
	}
	return (found);
}
