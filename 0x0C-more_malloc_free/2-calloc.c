#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: poitnter to new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int bytes;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < bytes; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
