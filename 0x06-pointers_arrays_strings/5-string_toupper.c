#include "main.h"
#include <string.h>

/**
 * string_toupper - works exactly like strupr function
 * Return: string_toupper
 * @conv: pointer
 */
char *string_toupper(char *conv)
{
int i;
int length = strlen(conv);

for (i = 0; i < length; i++)
{
if (conv[i] >= 97)
{
_putchar(conv[i] - 32);
}
else
_putchar(conv[i]);
}
_putchar('\n');
return (0);
}
