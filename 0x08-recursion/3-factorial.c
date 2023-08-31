#include "main.h"
/**
 * factorial - calculates the factorial of given number
 *					using recursion
 * @n: the number whose factorial is to be calculated
 *
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
