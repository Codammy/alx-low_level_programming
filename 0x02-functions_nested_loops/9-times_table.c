#include "main.h"

/**
 * times_table - prints timestable
 *
 * return void
 */
void times_table(void)
{
	int x, j;

for (x = 0; x <= 9; x++)
{
for (j = 0; j < 10; j++)
{
int z = j * x;

if (z < 10)
{
if ((x == 0) && (z == 0))
{
_putchar(z + '0');
if (j < 9)
_putchar(',');
_putchar(' ');
_putchar(' ');
}
if ((x != 0) && (z == 0))
{
_putchar(z + '0');
_putchar(',');
}
if (z > 0)
{
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
if (j < 9)
_putchar(',');
}
}
else
{
_putchar(' ');
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
if (j < 9)
_putchar(',');
}
}
_putchar('\n');
}
}
