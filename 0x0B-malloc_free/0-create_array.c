#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - function that  creates an array of chars
 * @size : desired size
 * @c : char bytes to initialise the array
 *
 * return:  pointer to the array, or NULL if it fails
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
