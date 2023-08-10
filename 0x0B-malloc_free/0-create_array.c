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

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[i] = '\0';
	return (ptr);
}
