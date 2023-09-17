#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer and returns the index
 *	of the first element for which the cmp function does not return 0
 * @array: a pointer to the array
 * @size: size of the array
 * @cmp:  a pointer to the function to be used to compare values
 *
 * Return:  the index of the first element
 *	for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
