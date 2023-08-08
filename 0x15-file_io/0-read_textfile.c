#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 *
 * @filename: file toread from
 * @letters: number of bytes to read
 * Return: bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int bytes_read, bytes_written, fd;
	char *buff;

	if (!filename || letters < 1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 3)
		return (0);
	buff = malloc(letters);
	if (!buff)
		return (0);
	bytes_read = read(fd, buff, letters);
	if (bytes_read < 0)
		return (0);
	bytes_written = write(STDOUT_FILENO, buff, letters);
	if (bytes_written < 0)
		return (0);

	return (bytes_read);
}
