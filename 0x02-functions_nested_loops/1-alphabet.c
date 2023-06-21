#include"main.h"

/**
 * print_alphabet - This function uses the _putchar function to print
 *                  the lowercase alphabet from 'a' to 'z'
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
