#include "main.h"

/**
 * readerror - hanlde read error
 *
 * @file: filename
 * @buf: buffer
 */
void readerror(char *file, char *buf)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	if (buf)
		free(buf);
	exit(98);
}
/**
 * writeerror - hanlde write error
 *
 * @file: file name
 * @buf: buffer
 */
void writeerror(char *file, char *buf)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	if (buf)
		free(buf);
	exit(99);
}
/**
 * closeerror - hanlde close error
 *
 * @fd: file descriptor.
 */
void closeerror(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
	exit(100);
}

/**
 * main - program that copies the content of a file to another.
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		readerror(av[2], NULL);
	buf = malloc(1024);
	if (!buf)
		readerror(av[1], NULL);
	n = read(fd1, buf, 1024);
	if (n == -1)
		readerror(av[1], buf);
	fd2 = open(av[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
		writeerror(av[2], buf);
	while (n)
	{
		if (write(fd2, buf, n) == -1)
			writeerror(av[2], NULL);
		n = read(fd1, buf, 1024);
	}
	free(buf);
	if (close(fd1) == -1)
		closeerror(fd1);
	if (close(fd2) == -1)
		closeerror(fd2);
	return (0);
}
