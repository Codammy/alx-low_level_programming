#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++) 
	{
		printf("%02x ", start[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *main_opcodes;
	if (argc != 2) 
	{
		printf("Error\n");
		return 1;
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return 2;
	}

	main_opcodes = (unsigned char *)main;

	print_opcodes(main_opcodes, num_bytes);

	return 0;
}

