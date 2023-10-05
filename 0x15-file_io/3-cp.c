#include "main.h"
/**
 * cp - copies contents from a file to another
 * @file_from: path to a source file
 * @file_to: path to destination file
 * Return: copies content to file_to
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP
		| S_IROTH;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if(fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	bytes_read = read(fd_from, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d and fd %d\n", fd_from, fd_to);
		exit(100);
	}
	return (0);
}
