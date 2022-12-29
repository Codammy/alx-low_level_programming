#include "main.h"
#include <string.h>

/**
 *rev_string - reverses a string;
 *@s: pointer
 *no return.
 */
void rev_string(char *s)
{
	/* s = stores the address of the array */
	int l = strlen(s);
	char a[450];
	int i = 0;
	int j;
	int x;

	for (j = l - 1; j >= 0; j--)
	{
		a[i] = s[j];
		i++;
	}
	for (x = 0; x < l; x++)
	{
		s[x] = a[x];
	}
}
