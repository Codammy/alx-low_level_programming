#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: indicates no. of argument (MAX 3)
 * @argv: arrays of pointers to argument. incluing program name.
 */
int main (int argc, char *argv[])
{
	int fd, rdstatus, clstatus, wrstatus;
	char *buff;

	if (argc != 3)
	{
		puts("Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	buff = (char *) malloc(1024 * sizeof(char));
	rdstatus = read(fd, buff, 1024);
	if (rdstatus < 0)
	{
		perror("Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}
	clstatus = close(fd);
	if (clstatus < 0)
	{
		perror("Error: Can't close fd FD_VALUE");
		exit(100);
	}
	fd = open(argv[2], O_TRUNC | O_CREAT | O_RDWR, 0644);
	wrstatus = dprintf(fd, "%s", buff);
	if (wrstatus < 0)
	{
		perror("Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	clstatus = close(fd);
	if (clstatus < 0)
	{
		perror("Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (0);
}
