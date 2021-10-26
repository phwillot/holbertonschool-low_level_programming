#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - Frees a 2 dimensional grid.
  * @grid: Grid two dimensionals
  * @height: height of the array
  *
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
