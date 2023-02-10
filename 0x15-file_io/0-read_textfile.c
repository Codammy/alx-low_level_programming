#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX I/O.i
 *
 * @filename: file to read from.
 * @letters: length of charcters to read.
 * Return: 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int lenrd;
	char *lyrics;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	lyrics = (char *)malloc(letters * sizeof(char));
	if (lyrics == NULL)
		return (0);
	lenrd = read(fd, lyrics, letters);
	dprintf(STDOUT_FILENO, lyrics, letters);
	close(fd);
	return (lenrd);
}
