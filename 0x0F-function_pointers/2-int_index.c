#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size : the size of array
 * @cmp: the poinbter
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (!array || !cmp)
		return;
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
}
