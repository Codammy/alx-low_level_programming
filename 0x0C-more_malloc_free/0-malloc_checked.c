#include <stdlib.h>

/**
 * malloc_checked - alloc mem using malloc
 *
 * @b: size
 * Return: void or exit
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);	
}
