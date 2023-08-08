#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int bytes_read, fd;
	char *buff;

	if (!filename || letters < 1)
		return (0);
	if ((fd = open(filename, O_RDONLY)) < 1)
		return (0);
	if (!(buff = malloc(sizeof(char) * letters)))
		return (0);
	if ((bytes_read = read(fd, buff, letters)) < 0)
		return (0);
	if ((bytes_read = write(STDIN_FILENO, buff, letters)) < 0)
                return (0);

	return (bytes_read);
}
