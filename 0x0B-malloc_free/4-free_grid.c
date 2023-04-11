#include "main.h"

/**
 * free_grid - fredsfse the grid
 * @grid: grid of memofsddfries
 * @height: intfds
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int b = 0;

	for (; b < height; b++)
		free(grid[b]);
	free(grid);
}
