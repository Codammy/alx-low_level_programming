#include "main.h"

/**
 * main -  program that copies the content of a file to another file.
 *
 * @ac: n number of args passed
 * @av: args passed
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd1, fd2, n;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}
	buf = malloc(1024);
	n = read(fd1, buf, 1024);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	fd2 = open(av[2], O_RDWR, O_TRUNC);
	if (write(fd2, buf, n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %", av[2]);
		exit(99);
	}
	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}

	return (0);
}
