#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freeing a grid
 * @grid: pointer
 * @height: var
 * Return: void
 */
void free_grid(int **grid, int height)
{
int m;
for (m = 0; m < height; m++)
{
	free(grid[m]);
}
free(grid);
}
