#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index.
 * @n: decimal
 * @index: index to srt.
 *
 * Return: 1 or -1..
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = 1 << index | *n;

	return (1);
}
