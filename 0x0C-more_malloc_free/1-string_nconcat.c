#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: len of s2
 * Return: pointer to newly allocated space in memory, which contains s1,
 *	followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len;
	int len1 = 0;
	int len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		len = len1 + len2;
	else
		len = len1 + n;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	if (n >= len2)
	{
		for (i = 0; i < len2; i++)
			ptr[len1 + i] = s1[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			ptr[len1 + i] = s2[i];
	}
	ptr[len] = '\0';
	return (ptr);
}
