#include "main.h"

/**
 *  clear_bit - sets the value of a bit to 0 at a given index.
 *
 *  @n: number to set
 *  @index: index to set
 *  Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index >= 64)
		return (-1);
	num = ~(1 << index);
	*n = *n & num;
	return (1);
}
