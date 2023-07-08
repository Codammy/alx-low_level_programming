#include <stdio.h>
/**
 * main - program that prints it name
 *
 * @argc: len of arguments passed.
 * @argv: array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
