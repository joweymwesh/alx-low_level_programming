#include "main.h"

/**
 * create_file - a file is created
 * @filename : a pointer to the name of file created
 * @text_content : a pointer to a string to write on the file
 *
 * Return: if NULL - -1, otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, len);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}
