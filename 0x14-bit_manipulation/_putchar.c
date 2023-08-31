#include <unistd.h>

/**
 * _putchar - prints a character to stdout
 *
 * @c: char to print
 * Return: c
 */
unsigned int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
