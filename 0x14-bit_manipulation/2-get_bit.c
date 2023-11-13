#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get
 * @n: the source
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
