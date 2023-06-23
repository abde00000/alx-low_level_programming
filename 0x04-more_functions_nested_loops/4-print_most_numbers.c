#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 *                 only use _putchar twice
 * Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num);
	}
	_putchar('\n');
}
