#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 *					your alloc_grid function.
 * @grid: value returned from the alloc_grid().
 * @height: size of the array.
 *
 * Return: always success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
