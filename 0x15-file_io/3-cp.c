#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _open(char *file, int action);
int _read(int fd, char *file, char **buf);
void _write(int fd, int n, char *buf, char *file);
void  _close(int fd);
/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd, n;
	char *buf;

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd = _open(argv[1], 1);
	n = _read(fd, argv[1], &buf);
	_close(fd);
	fd = _open(argv[2], 2);
	_write(fd, n, buf, argv[2]);
	_close(fd);

	return (0);
}
/**
 * _open - opens a file
 *
 * @file: file to open
 * @action: indicates write or read
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
			dprintf(2, "%s %s\n", "Error: Can't read from file", file);
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
			dprintf(2, "%s %s\n", "Error: Can't write to file", file);
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
 * @file: file name
 * @buf: buffer
 * Return: bytes read
 */
int _read(int fd, char *file, char **buf)
{
	int len;

	*buf = malloc(1024);
	if (!(*buf))
	{
		dprintf(2, "%s %s\n", "Error: Can't read from file", file);
		exit(98);
	}
	len = read(fd, *buf, 1024);
	if (len < 0)
	{
		dprintf(2, "%s %s\n", "Error: Can't read from file", file);
		exit(98);
	}
	return (len);
}

/**
 * _write - writes to file
 *
 * @fd: file descriptor to write to
 * @n: bytes to write
 * @buf: content to write to file.
 * @file: file name
 */
void _write(int fd, int n, char *buf, char *file)
{
	int len = write(fd, buf, n);

	if (len < 0)
	{
		dprintf(2, "%s %s\n", "Error: Can't write to file", file);
		exit(99);
	}
}

/**
 * _close - closes a file descriptor
 *
 * @fd: file descriptor
 */
void  _close(int fd)
{
	int c = close(fd);

	if (c != 0)
	{
		dprintf(2, "%s %d\n", "Error: Can't close fd", fd);
		exit(100);
	}
}
