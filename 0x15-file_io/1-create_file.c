#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wStats;

	fd = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		wStats = write(fd, text_content, strlen(text_content));
		if (wStats < 0)
		return (-1);
	}
	close(fd);
	return (1);
}
