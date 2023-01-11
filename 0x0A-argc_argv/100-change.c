#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 *
 * @argc: number of argument passed.
 * @argv: This is anarray of pointers, stores arguments passed.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int cents;
	int ccents;

	if (argc != 1) /* checks if arguments passed is equal to 1. */
	{
		puts("Error");
		return (1)
	}
	cents = atoi(argv[1]);

	return (0);
	/* End of Program */
}
