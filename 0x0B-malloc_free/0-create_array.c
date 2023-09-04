#include "main.h"
/**
 * create_array - creates an array of chars,
 *	 and initializes it with a specific char.
 * @size: size of the array
 * @c: the character to be intialize with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
