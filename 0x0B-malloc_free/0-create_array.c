#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and i itializes it withachar
 *
 * @size: array size
 * @c: char
 * Return: null or ptr.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	ptr[0] = c;

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
