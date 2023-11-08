#include "main.h"
/**
 * _strlens - counts string lengths
 * @text: the string
 * Return: string length;
 */
size_t _strlens(const char *text)
{
	size_t i = 0;

	if (text == NULL)
		return (0);
	while (text[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesW;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytesW = write(fd, text_content, _strlens(text_content));
	if (bytesW == -1)
	{
		close(fd);
		return (-1);
	}
	return (-1);
}
