#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b : the size
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	return (arr);
}
