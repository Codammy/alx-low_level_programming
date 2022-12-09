#include <stdio.h>

/**
 * main - Entry point
 * Size of datatypes
 * Return: Always 0 (Success)
 */
int main(void)
{
	char size_of_char;
	int size_of_int;
	long int size_of_long_int;
	long long int size_of_ll_int;
	float size_of_float;

	printf("size of a char : %lu byte(s)\n", sizeof(size_of_char));
	printf("size of an int : %lu byte(s)\n", sizeof(size_of_int));
	printf("size of a long int : %lu byte(s)\n", sizeof(size_of_long_int));
	printf("size of a long long int : %lu byte(s)\n", sizeof(size_of_ll_int));
	printf("size of a float : %lu byte(s)", sizeof(size_of_float));
	return (0);
}
