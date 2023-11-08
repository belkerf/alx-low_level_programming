#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size : the size of array
 * @cmp: the poinbter
 * Return: the number if true -1 if false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
