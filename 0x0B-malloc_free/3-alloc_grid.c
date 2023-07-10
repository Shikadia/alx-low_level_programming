#include <stdlib.h>

/**
* ***alloc_grid - Returns a pointer to a 2 dimensional array of integers
* @width: Width of the array
* @height: Height of the array
*
* Return: returns (NULL) on FAILURE
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int h;
	int w;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		grid[h] = (int *)malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			w = 0;
			while (w < h)
			{
				free(grid[w]);
				w++;
			}
			free(grid);
			return (NULL);
		}
		h++;
	}
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
