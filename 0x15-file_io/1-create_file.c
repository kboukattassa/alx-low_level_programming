#include "main.h"
/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
