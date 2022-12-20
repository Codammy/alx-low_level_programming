#include "main.h"
#include <string.h>

/**
 *print_rev - prints a constant strint to stdo
 *@s: pointer
 *no return.
 */
void print_rev(char *s)
{
char *i = s;
int num = strlen(i);
int index;

for (index = num - 1; index >= 0; index--)
{
_putchar(i[index]);
}
_putchar('\n');
}
