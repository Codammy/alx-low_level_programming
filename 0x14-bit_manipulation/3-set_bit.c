#include "main.h"

/**
 *  set_bit - sets the value of a bit to 1 at a given index.
 *
 *  @n: number to set
 *  @index: index to set
 *  Return: new number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index >= 64)
		return (-1);
	num = 1 << index;
	*n = *n | num;
	return (1);
}
