#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memeory area to fill in another memory.
 *
 * @dest: memory copying to.
 * @src: memory copying from.
 * @size: number of bytes to copy/no. of bytes to replace.
 *
 * Return: (desc) which is a pointer;
 */
char *_memcpy(char *dest, char *src, unsigned int size)
{
	memcpy(dest, src, size);

	return (dest);
}
