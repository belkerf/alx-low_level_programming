#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
 * Return: pointer to two dimensional array.
 * @height : the height.
 * @width : the width.
 */
int **alloc_grid(int width, int height)
{
	int *arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int *)malloc(width * height * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
