#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: file to be read
 * @letters : number of letters to read and print
 * @Return : number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, t;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(op, buffer , letters);
	t = write(STDOUT_FILENO,buffer, r);

	if (op == -1 || r ==-1 || t == -1 || t != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (t);
}
