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
	size_t len;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	for (len = 0; len < size; len++)	
	ptr[len] = c;

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
