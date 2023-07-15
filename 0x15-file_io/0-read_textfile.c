#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file and prints it to POSIX stdout.
 * @filename: pointer to the file name.
 * @letters: number of letters a function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	r = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (fp == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fp);

	return (w);
}
