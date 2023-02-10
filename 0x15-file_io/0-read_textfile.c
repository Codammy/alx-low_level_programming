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
		exit(0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		exit(0);
	lyrics = (char *)malloc(letters * sizeof(char));
	if (lyrics == NULL)
		exit(0);
	read(fd, lyrics, letters);
	lenrd = write(STDOUT_FILENO, lyrics, letters);
		if (!lenrd)
			return (0);
	close(fd);
	return (lenrd);
}
