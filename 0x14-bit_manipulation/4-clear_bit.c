#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: the number to change its bits
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	tmp = 1 << index;
	if (*n & tmp)
		*n = *n | tmp;
	return (1);
}
