#include "main.h"
/**
 * create_file - creates a file.
 * @filename: is the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 *		file can not be written, write “fails”, etc…)
 */
size_t _strlens(const char *text)
{
        size_t i = 0;

        if (text == NULL)
                return 0;
        while (text[i] != '\0')
        {
                i++;
        }
        return (i);
}
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesW;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytesW = write(fd, text_content, _strlens(text_content));
	if (bytesW == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
