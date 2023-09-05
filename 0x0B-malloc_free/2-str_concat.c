#include "main.h"
/**
 * str_concat -  concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to the contents of s1,
 *	followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	int len;
	char *ptr;

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}
	len = len1 + len2 + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptr[i + len1] = s2[i];
	}
	ptr[len - 1] = '\0';
	return (ptr);
}
