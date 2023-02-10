#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

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
	lenrd = read(fd, lyrics, letters);
	lyrics[lenrd + 1] = '\0';
	write(STDOUT_FILENO, lyrics, letters);
	close(fd);
	return (lenrd);
}
