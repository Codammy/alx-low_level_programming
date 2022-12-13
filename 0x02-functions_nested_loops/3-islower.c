#include <ctype.h>
#include "main.h"
/**
 * _islower - check for upper or lower case
 *@c: anything
 * Return: 0
 */
int _islower(int c)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if ((c >= a) || (c >= a))
			return (1);
		else
			return (0);
	}
	return (c);
}
