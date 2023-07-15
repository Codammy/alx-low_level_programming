#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - allocates mem using malloc
 *
 * @nmemb: type size
 * @size: size
 * Return: NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
