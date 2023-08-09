#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: name of the file
 * @text_content: string to write
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd < 3)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd < 3)
			return (-1);
	}
	if (!text_content)
		return (1);
	n = write(fd, text_content, strlen(text_content));
	if (n < 0)
		return (-1);
	close(fd);
	return (1);
}
