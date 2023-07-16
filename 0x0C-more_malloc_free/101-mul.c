#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - simple calculator
 *
 * @argc: numarg
 * @argv: ptr to arr of ptr
 * Return: 0 on Success.
 */
int main(int argc, char **argv)
{
	long int num1, num2;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%ld\n", num1 * num2);

	return (0);
}
