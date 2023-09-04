#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	 which contains a copy of the string given as a parameter.
 *
 * @str: the original string
 * Return: a pointer to the duplicated string
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
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[len] = '\0';
	return (ptr);
}
