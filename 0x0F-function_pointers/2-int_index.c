#include <stddef.h>
/**
 * int_index - A function that searches for an integer.
 *
 * @size: is the number of elements in the array
 * @cmp: pointer to function that checks for comparison
 * @array: pointer to array
 *
 * Return: returns the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int count = 0;
int index, not_zero;

if (array != NULL && cmp != NULL)
{
if (size <= 0)
	return (-1);
while (count < size)
{
	index = array[count];
	not_zero = cmp(index);
	if (not_zero == 1)
	break;
	count++;
}
if (not_zero == 0)
	return (-1);
}
else
	return (-1);
return (count);
}
