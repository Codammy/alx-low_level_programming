#include "main.h"
#include <string.h>

/**
 *print_rev - prints a constant strint to stdo
 *@s: pointer
 *no return.
 */
void print_rev(char *s)
{
int num = strlen(s);
int index;

for (index = num - 1; index >= 0; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
