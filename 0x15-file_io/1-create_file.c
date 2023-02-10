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
	int fd;
	
	if (filename == 0)
		return (-1);
	fd = open(filename, O_RDWR, O_CREAT | O_EXCL);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	return (1);
}
