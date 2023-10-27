#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * Return: char.
 * @s : pointer to memory area.
 * @b : the constant.
 * @n : the first byte of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
