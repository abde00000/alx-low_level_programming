#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 *	to get from one number to another.
 * @n: the 1st number source
 * @m: the second number source
 * Return: number of bits you would need to flip
 *	to get from one number to a nother
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
