#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 *
 * @size: size of array.
 * @c: char to initialize with.
 * Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	size--;
	while ((int)size >= 0)
		arr[size--] = c;

	return (arr);
}
