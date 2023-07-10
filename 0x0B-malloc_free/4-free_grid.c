#include <stdlib.h>

/**
* free_grid - Frees a 2 dimensional grid previously
* created by the alloc_grid function.
* @grid: Pointer to a pointer of integers of a 2D array
* @height: Height of the grid
*
* Return: returns Void
*/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
