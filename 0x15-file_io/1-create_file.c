#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: file to read
 * @text_content: content.
 * Return: actual number read
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	n = write(fd, text_content, strlen(text_content));
	if (n == -1)
		return (-1);
	return (1);
}
