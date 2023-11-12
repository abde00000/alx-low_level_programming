#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * closeF - closed the file descriptors
 * @fd: the file descriptor
 */
void closeF(int fd)
{
	int f;

	f = close(fd);
	if (f == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * create_buff - allocates memory and create the buffer
 * @file: the file specified with the buff
 * Return: the buffer created
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * main - copies the contents of a file to another file
 * @argc: the number of arrguments
 * @argv: the array pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, B_read, B_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO,
                                "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO,
                                "Error: Can't write to %s", argv[2]);
                        exit(99);
	}
	B_read = read(from, buffer, 1024);
	while (B_read > 0)
	{
	B_write = write(to, buffer, B_read);
		if (B_write != B_read)
		{
			dprintf(STDERR_FILENO,
                                "Error: Can't write to %s", argv[2]);
                        exit(99);
		}
	B_read = read(from, buffer, 1024);
	}
	free(buffer);
	closeF(from);
	closeF(to);

	return (0);
}
