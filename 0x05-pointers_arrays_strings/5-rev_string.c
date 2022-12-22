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
int j;
char* t = s;

for (j = num; j >= 0; j--)
{
t = &(s[j]);
}
*s = *t;
}
