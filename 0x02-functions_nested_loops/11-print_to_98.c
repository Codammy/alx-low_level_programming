#include <stdio.h>

/**
 * print_to_98 - print numbers from n todown to  98
 * @n: param
 * return: null
 */
void print_to_98(int n)
{
int countdown;
if (n <= 98)
for (countdown = n; countdown <= 98; countdown++)
{
printf("%d", countdown);
if (countdown != 98)
{
putchar(',');
putchar(' ');
}
}
if (n > 98)
for (countdown = n; countdown >= 98; countdown--)
{
printf("%d", countdown);
if (countdown != 98)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
