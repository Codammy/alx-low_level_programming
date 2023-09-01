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
	unsigned int num = 1 << index;

	if (index >= 64)
		return (-1);
	if (n & num)
		return (1);
	return (0);
}
