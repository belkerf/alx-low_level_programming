#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * Return: pointer to dest
 * @dest : the memory area we copy to.
 * @src : the memory area we copy from.
 * @n : the number of bytes we copy.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
