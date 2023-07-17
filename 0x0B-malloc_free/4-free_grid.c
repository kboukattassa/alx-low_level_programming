#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees
 * @height: para
 * Return: Result
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
