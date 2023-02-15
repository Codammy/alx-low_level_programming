#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: malloc's param
 * Return: pointer to newly allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *maloc =  malloc(b * sizeof(b));

	if (maloc == NULL)
		exit(98);

	return (maloc);
}
