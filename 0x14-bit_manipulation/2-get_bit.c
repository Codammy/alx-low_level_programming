#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index to get
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ref = n, len = -1, i = 0, num;

	while (ref > 0)
	{
		ref >>= 1;
		len++;
	}

	/**
	* if (index > len)
	*	return (-1);
	*/
	num = 1;
	while (i <= len)
	{
		if (i == index)
		{
			if (n & num)
				return (1);
			return (0);
		}
		num <<= 1;
		i++;
	}
	return (0);
}
