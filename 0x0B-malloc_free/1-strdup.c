#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str : the string source to be duplicated
 *
 * Return:  a pointer to the duplicated string
 * it returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
