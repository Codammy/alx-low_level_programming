#include <stdio.h>

/**
 * main - passes program name as argument at runtime.
 *
 * @argc: number of argument passed.
 * @argv: This is anarray of pointers, stores arguments passed.
 * Return: 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc);

	return (0);
}
