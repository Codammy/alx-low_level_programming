#include <stdio.h>

/**
 * main - prints the product of two numbers
 *
 * @argc: argv len
 * @argv: array of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
