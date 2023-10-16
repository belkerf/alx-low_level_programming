#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s : the string.
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s)
	{
		a++;
		s++;
	}
	_putchar('0' + a);
	while (a >= 0)
	{
		_putchar(s[a - 1]);
		a--;
	}
	_putchar('0' + a);
	_putchar('\n');
}
