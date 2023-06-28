#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, l, m;

	l = 0;
	m = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	m = l - 1;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[m];
		s[m--] = tmp;
	}
}
