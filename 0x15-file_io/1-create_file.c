#include "main.h"

/* create_file - a file is created
 * @filename : pointer to the name of file to create
 * text-content : a pointer to a string to write to the file
 * Return: if it fails - -1, otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] len++);
	}

	op = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);
	w = write(op, text_content, len);

	if  (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
