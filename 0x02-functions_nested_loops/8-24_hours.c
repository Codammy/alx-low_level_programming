#include "main.h"

/**
 *jack_bauer - Monitor jack bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
int i, j;

for (i = 0; i <= 23; i++)
for (j = 0; j <= 59; j++)
{
if (i < 10)
{
_putchar('0');
_putchar(i + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
_putchar(':');
if (j < 10)
{
_putchar('0');
_putchar(j + '0');
}
else
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
