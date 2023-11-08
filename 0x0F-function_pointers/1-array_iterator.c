#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_interator - function that executes a function given as a
 * parameter on each element of an array.
 * @array : the array
 * @size: the size
 * @action: the pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	
	if (!array || !action)
		return;

	while (i < size)
	{
		action(*array);
		i++;
		array++;
	}
}
