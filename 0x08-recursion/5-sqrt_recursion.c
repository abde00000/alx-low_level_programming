#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of
 *					a given number
 *
 * @n: original num
 *
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - function helps to find the natural sqr number of n
 * @n: original num
 * @test : a guess number
 *
 * Return: the natural square root of a number.
 */
int _sqrt_helper(int n, int test)
{
	if (test * test == n)
		return (test);
	if (test * test > n)
		return (-1); /** indicates that there is no natural square for n */
	return (_sqrt_helper(n, test + 1));
}

