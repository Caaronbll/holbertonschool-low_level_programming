#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads and prints a file
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: number of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff || !filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
