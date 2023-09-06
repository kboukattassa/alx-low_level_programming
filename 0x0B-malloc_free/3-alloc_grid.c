#include <stdlib.h>
#include "main.h"
/**
 * alloc_grind - returns pointer to a 2 dimens array
 * @width: width of array
 * @height: height of arra
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;

	grid = malloc(sizeof(int) * height);
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
