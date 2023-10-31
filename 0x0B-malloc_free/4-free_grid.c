#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid : the array we want frees.
 * @height : the height of the array.
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (*grid)
		{
			for (j = 0; *grid[j]; j++)
			{
				free(grid[j]);
			}
		}
	}
	free(grid);
}
