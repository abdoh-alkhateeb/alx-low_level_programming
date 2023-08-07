#include <stdlib.h>

/**
 * free_grid- a function that frees a 2 dimensional grid
 * previously created by alloc_grid function.
 * @grid: pointer to 2D grid.
 * @height: height of 2D grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
