#include "main.h"
#include <string.h>
/**
 * puts_half - prints characters to stdo (starting from half of the character).
 * @str: string param.
 * Return: null
 */
void puts_half(char *str)
{
int length = strlen(str);
int secon_half = (length / 2);
int n = (length - 1) / 2;
int i;

if (length % 2 == 0)
{
for (i = secon_half; i < length; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = n; i < length - 1; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
