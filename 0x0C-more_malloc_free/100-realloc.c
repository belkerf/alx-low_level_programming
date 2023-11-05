#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using
 * malloc and free.
 * @ptr : the previously allocated memory.
 * @old_size : the old size.
 * @new_size : the new size.
 * Return: the new memory allocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	while (i < old_size)
	{
		p[i] = ptr[i]
	}
	return (p);
}
