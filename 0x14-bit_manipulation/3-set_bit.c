#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: pointer to number
 * @index: index to set
 * Return: 1 on Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ref = *n, len = -1, i = 0, num;

	while (ref > 0)
	{
		ref >>= 1;
		len++;
	}
	if (index > len)
		return (-1);
	num = 1;
	while (i <= len)
	{
		if (i == index)
		{
			*n = *n | num;
			return (1);
		}
		num <<= 1;
		i++;
	}
	return (1);
}
