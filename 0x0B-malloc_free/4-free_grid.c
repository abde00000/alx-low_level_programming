#include "main.h"
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: the value that was returned by the previous alloc
 * @height: 1st dimension array
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid)
	}
}
