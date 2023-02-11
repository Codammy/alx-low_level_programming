#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: indicates no. of argument (MAX 3)
 * @argv: arrays of pointers to argument. incluing program name.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd, rdstatus, clstatus, wrstatus;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	buff = (char *) malloc(1024 * sizeof(char));
	rdstatus = read(fd, buff, 1024);
	if (rdstatus < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	clstatus = close(fd);
	if (clstatus < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	fd = open(argv[2], O_TRUNC | O_CREAT | O_RDWR, 0664);
	wrstatus = dprintf(fd, "%s", buff);
	if (wrstatus < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	clstatus = close(fd);
	if (clstatus < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
