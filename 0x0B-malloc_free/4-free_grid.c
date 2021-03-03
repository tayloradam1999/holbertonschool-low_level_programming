#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - Frees a 2 dimensional array
 * @grid: Grid to free
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	(void)height;
	free(grid);
}
