#include <stdio.h>

/**
 * main - prints number of arguments passes
 *
 * argc - num arg passed
 * argv - args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
