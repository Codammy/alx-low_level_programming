#include "main.h"
#include <string.h>
/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer
 * Return: null.
 */
void puts2(char *str)
{
int length = strlen(str);
int i;

for (i = 0; i <= length; i++)
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
}        
}
_putchar('\n');
}
