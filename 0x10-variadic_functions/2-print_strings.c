#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char*);
		if (arg == NULL)
		{
			arg = "(nil)";
		}
		printf("%s", arg);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
