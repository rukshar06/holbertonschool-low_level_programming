#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 *
 * Return: pointer to grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(grid[j]);
				j++;
			}

			free(grid);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}

		i++;
	}

	return (grid);
}
