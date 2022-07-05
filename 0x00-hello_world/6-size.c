#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	long int l_d;
	long long int ll_d;
	float f;
	char c;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l_d));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll_d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
