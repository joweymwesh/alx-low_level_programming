#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename : a pointer to the filename
 * @text_content : string to add at the end of the file
 *
 * Return : -1 if file name is NULL
 * 	  :if the function fails - -1
 * 	  :if file does not exist and the user lacks write permissions - -1
 * 	  :otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, len);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}
