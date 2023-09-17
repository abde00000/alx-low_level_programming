#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - add every parametre and return sum
 * @n: number of args
 * Return:  the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0, arg;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}
	return (sum)
}
