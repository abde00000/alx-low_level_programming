#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int a, b, l;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	l = a;

	for (b = l - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
