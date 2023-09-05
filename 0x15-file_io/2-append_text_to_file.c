#include "main.h"

/**
 * append_text_to_file - reads a text file and prints it.
 *
 * @filename: file to read
 * @text_content: content.
 * Return: 1 or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		n = write(fd, text_content, strlen(text_content));
		close(fd);
		if (n == -1)
			return (-1);
		return (1);
	}
	return (1);
}
