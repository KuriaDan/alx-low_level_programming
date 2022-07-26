#include "main.h"
#include <stdlib.h>
/**
  * free_grid - function to free a 2d grid created by alloc_grid
  * @grid: 2d array
  * @height: height of array
  * Return: nothing
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
