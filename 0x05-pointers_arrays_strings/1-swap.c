#include "main.h"

/**
 * swap_int - swap the values of the pointers
 * @a:  pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}
