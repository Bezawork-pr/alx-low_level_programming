#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Free grid
 *
 * @grind: Takes double pointer
 *
 * @height: Takes int
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
