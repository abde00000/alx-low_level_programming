#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters
 *
 * Return: If the function fails or filename is NULL - 0.
 *	- the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read, write, open;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	open = open(filename, O_RDONLY);
	read = read(open, buffer, letters);
	write = write(open, buffer, read);

	if (open == -1 || read == -1 || write == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (write);
}
