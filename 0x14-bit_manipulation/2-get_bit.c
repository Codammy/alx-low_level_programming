#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 *
 * @n: number
 * @index: index, starting from 0
 * Return: value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = n, i = index, num = 1 << index;
	if (i >= 0 && x >= 0)
	{
		if (n & num)
			return (1);
		return (0);
	}
	return (-1);
}
