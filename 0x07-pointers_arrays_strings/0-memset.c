#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * Return: char.
 * @s
 * @b
 * @n
 */
char *_memset(char *s, char b, unsigned int n)
{
	s[n] = b;
	return (s);
}
