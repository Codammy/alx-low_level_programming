#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates mem using malloc
 *
 * @nmemb: type size
 * @size: size
 * Return: NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmmemb * size);
	if (!ptr)
		return (NULL);
}
