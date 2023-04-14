#include "main.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1024

/**
 * main - it copies the content of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int o_from, o_to, bytes_read, bytes_written;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	o_from = open(argv[1], O_RDONLY);
	if (o_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	o_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (o_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		bytes_read = read(o_from, buffer, BUFSIZE);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		bytes_written = write(o_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (bytes_read == BUFSIZE);

	if (close(o_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close o %d\n", o_from);
		exit(100);
	}

	if (close(o_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close o %d\n", o_to);
		exit(100);
	}

	return (0);
}
