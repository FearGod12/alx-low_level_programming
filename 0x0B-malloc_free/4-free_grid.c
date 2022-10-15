#include "main.h"

/**
 * free_grid - frees memory
 * @grid: array memory to be freed
 * @height: columns of the array
 * void: returns  nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
