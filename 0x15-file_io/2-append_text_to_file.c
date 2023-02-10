#include "main.h"

/**
 * append_text_to_file - appends text to an exiting file.
 *
 * @filename: file to open.
 * @text_content: is a NULL terminated string to write.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int fstate;

	fp = fopen(filename, "a");
	if (fp == 0)
		return (-1);
	if (text_content != NULL)
	{
		fstate = fprintf(fp, "%s", text_content);
		if (fstate < 0)
		return (-1);
	}
	fclose(fp);
	return (1);
}
