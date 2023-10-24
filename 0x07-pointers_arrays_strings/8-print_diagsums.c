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
	int i, k = 0, l = 0;

	for (i = 0; i < (size*size); i++)
	{
		if (i % (size + 1) == 0)
			k = k + (a[i]);
		if (i % (size -1) == 0 && i != 0 && i < size*size -1)
			l += a[i];
	}
	printf("%d, %d\n", k, l);
}
