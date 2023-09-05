#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: file to read
 * @letters: number of letter to read
 * Return: actual number read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	unsigned long int st;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	close(fd);
	n = write(STDOUT_FILENO, buf, n);
	if (n == -1)
		return (0);
	st = n;
	return (st);
}
