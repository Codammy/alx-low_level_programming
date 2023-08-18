#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to number
 * @index: index to set
 * Return: 1 on Success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref = *n, len = -1, num;

	while (ref > 0)
	{
		ref >>= 1;
		len++;
	}
	if (index > len)
		return (-1);
	num = ~(1 << index);
	*n = *n & num;
	return (1);
}
