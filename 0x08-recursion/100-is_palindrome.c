#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_rec_pal(s, 0, len - 1));
}
/**
 * _rec_pal - helps is_palindrome to define the string
 * @s: the string
 * @start: start half of check
 * @end: end half of check
 * Return: 1 or 0
 */
int _rec_pal(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_rec_pal(s, start + 1, end - 1));
}
