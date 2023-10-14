#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number that contains bits
 * @index: the bit we want to get
 * Return: the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		int bit;

		bit = ((n >> index) & 1);
		return (bit);
	}
	return (-1);
}
