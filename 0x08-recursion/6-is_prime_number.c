#include "main.h"
/**
 * is_prime_number - check whether the number is prime.
 *
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_helper(n, 2));
}
/**
 * _prime_helper - helps is_prime_number function
 * @divisor: the number that define the prime num
 * @n: the number to be checked
 * Return: same as is_prime_number
 */
int _prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (_prime_helper(n, divisor + 1));
}
