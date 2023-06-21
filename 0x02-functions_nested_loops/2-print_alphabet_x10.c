#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 * return ?
*/

void print_alphabet_x10(void)
{
	int l, ch;

	for (l = 0; l <= 9; ++l) /* l stands for line */
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
