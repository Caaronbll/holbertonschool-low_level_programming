#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads and prints a file
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: number of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	ssize_t file, writeOut, readOut;
	char *text = malloc(letters);

	if (!text || !filename)
		return (0);

	file = open(filename, O_RDONLY)

	if (file == -1)
	{
		free(text);
		return (0);
	}

	readOut = read(file, text, letters);

	writeOut = write(STDOUT_FILENO, text, readOut);

	close(file);

	return (writeOut);
}
