#include <stdio.h>

/**
 * main - fizz buzz test
 *
 * Return: 0
 */
int main()
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz");
if (i < 100)
putchar(' ');
continue;
}
else if (i % 3 == 0)
{
printf("Fizz");
if (i < 100)
putchar(' ');
continue;
}
else if (i % 5 == 0)
{
printf("Buzz");
if (i < 100)
putchar(' ');
continue;
}
else
{
printf("%d", i);
if (i < 100)
putchar(' ');
}
}
putchar('\n');

return (0);
}
