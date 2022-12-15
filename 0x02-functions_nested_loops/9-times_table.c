#include "main.h"

/**
 * times_table - prints timestable
 *
 * return void
 */
void times_table(void)
{
for (int x = 0; x <= 9; x++)
{
for (int j = 0; j < 10; j++)
{
if (j * x < 10)
{
if ((x == 0) && (j * x == 0))
{
_putchar(j * x + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
if ((x != 0) && (j * x == 0))
{
_putchar(j * x + '0');
_putchar(',');
}
if (j * x > 0)
{
_putchar(' ');
_putchar(' ');
_putchar(j * x + '0');
if (j < 9)
_putchar(',');
}
}
else
{
_putchar(' ');
_putchar(j * x / 10 + '0');
_putchar(j * x % 10 + '0');
if (j < 9)
_putchar(',');
}
}
_putchar('\n');
}
}
