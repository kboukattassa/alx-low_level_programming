#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to the std out
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);

	free(buffer);
	close(fd);

	if (n_written == n_read)
		return (n_read);
	return (0);
}
