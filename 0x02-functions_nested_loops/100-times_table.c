#include "main.h"
/**
 * print_times_table - print times table from value n
 * @n : param value
 */
void print_times_table(int n)
{
int i, j;

if ((n <= 15) || (n <= 0))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
_putchar(i * j + '0');
if ((i * j < 10) && (j != 0))
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(i * j + '0');
}
if ((i * j > 9) && (i * j < 100))
{
_putchar(' ');
_putchar(' ');
_putchar(i * j / 10 + '0');
_putchar(i * j % 10 + '0');
}
if (i * j > 99)
{
_putchar(' ');
_putchar(' ');
_putchar(i * j / 10 + '0');
_putchar(i * j % 10 + '0');
}
if (j != n)
{
_putchar(',');
}
}
_putchar('\n');
}
}
}
