#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: malloc's param
 * Return: pointer to newly allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *maloc =  malloc(b);

	if (maloc == 0)
		exit(98);

	return (maloc);
}
