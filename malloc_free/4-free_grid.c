#include "main.h"
/**
 * free_grid - free 2 dimentional grid
 * @grid: grid
 * @height: height
 *
 * Return: Void.
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
