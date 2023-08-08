#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: file to append to
 * @text_content: text to append
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;
	char *buf;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd != 3)
		return (-1);
	if (!text_content)
		return (-1);
	n = strlen(text_content);
	buf = malloc(n);
	if (!buf)
		return (-1);
	n = write(fd, text_content, n);
	return (1);
}
