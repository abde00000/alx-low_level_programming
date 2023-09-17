#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - rints numbers, followed by a new line
 * @separator: the symbol that separates the nums
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int arg;
	va_list args;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			arg = va_arg(args, int);
			printf("%d", arg);
			if (i < n - 1)
				printf("%s", separator);
		}
	printf("\n");
	}
}
