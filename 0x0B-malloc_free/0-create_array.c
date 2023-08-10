#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	ptr[j] = '\0';
	return (ptr);
}
