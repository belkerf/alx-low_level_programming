#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a : the diagsums.
 * @size : the size.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k = 0, l = 0;

	for (i = 0; i < size; i++)
	{
		k = k + a[i][i];
	}
	for (i = size - 1; j >= 0; j--)
	{
		l = l + a[j][j];
	}
	printf("%d, %d", k, l);
}
