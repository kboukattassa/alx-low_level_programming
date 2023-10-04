#include "main.h"
/**
 * append_text_to_file - append text to the end of the file
 * @filename: name of the file
 * @text_content: content fo the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_result = write(fd, text_content, strlen(text_content));
	if (write_result == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
