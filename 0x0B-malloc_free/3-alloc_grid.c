#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns to a 2 dimensional array
 * @grid: address of pointer
 * Return: Result
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	return (grid);
}
