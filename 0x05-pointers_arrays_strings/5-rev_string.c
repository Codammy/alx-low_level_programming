#include "main.h"
#include <string.h>

/**
 *rev_string - reverses a string;
 *@s: pointer
 *no return.
 */
void rev_string(char *s)
{
int num = strlen(s);
char NewArray[];
int j;
for (j = num - 1; j >= 0; j--)
{
NewArray[num] = s[j];
}
s = &NewArray;
_putchar('\n');
}
