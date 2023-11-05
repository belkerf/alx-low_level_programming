#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb : the number of ellement.
 * @size : the size of nmemb.
 * Return: a pointer tto the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);

	while (i < (nmemb * size))
	{
		p[i] = '0';
		i++;
	}
	return (p);
}
