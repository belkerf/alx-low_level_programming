#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s : the string we workin on.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s && *s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
	
