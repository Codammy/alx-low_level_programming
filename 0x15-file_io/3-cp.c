#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 on success
 */
int _open(char *file);
int _read(int fd);
void _write(fd, n);
void  _close(fd);
int main(int argc, char **argv)
{
	int fd, n;
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "%s", "Usage: cp file_from file_to");
		exit(97);
	}
	fd = _open(argv[1], 1);
	n = _read(fd);
	_close(fd);
	fd = _open(argv[2], 2);
	_write(fd, n);
	_close(fd);

	return (0);
}
/**
 * _open - opens a file
 *
 * @file: file to open
 * Return: new file description
 */
int _open(char *file, int action)
{
	int fd;

	if (action == 1)
	{
		fd = open(file, O_RDONLY);
		if (fd < 0)
		{
			dprintf(2, "%s %s", "Error: Can't read from file", file);
			exit(98);
		}
	}
	else
	{
		fd = open(file, O_WRONLY | O_TRUNC);
		if (fd < 0)
		{
			fd = open(file, O_WRONLY | O_TRUNC | O_CREAT, 0664);
			if (fd < 0)
			{
			dprintf(2, "%s %s", "Error: Can't write to file", file);
			exit(99);
			}
		}
	}
	return (fd);
}
/**
 * _read - reads file content
 *
 * @fd: file descriptor
 *
 * Return: bytes read
 */
int _read(int fd)
{
	int fd;
	char *buf;

	buf = malloc(1024);
	if ()
	fd = read(fd, buf, 1024);
}
/**
 * 
 */
void _write(fd, n);
/**
 */
void  _close(fd);
