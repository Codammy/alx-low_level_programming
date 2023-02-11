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
	int fd;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buff = (char *) malloc(1024 * sizeof(char));
	read(fd, buff, 1024);
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	fd = open(argv[2], O_TRUNC | O_CREAT | O_RDWR, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	dprintf(fd, "%s", buff);

	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}