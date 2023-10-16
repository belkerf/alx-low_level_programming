#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s : the string.
 */
void print_rev(char *s)
{
	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
