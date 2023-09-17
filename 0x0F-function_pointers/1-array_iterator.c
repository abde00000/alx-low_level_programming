#include <stdio.h>
/**
 * array_iterator - executes a function given as a
 *		parameter on each element of an array
 * @array: pointer to the array
 * @size: the size of the array
 * @action: pointer to the function we need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
