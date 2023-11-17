#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s : the string we want to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s && *s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	if (*s != '\0')
		_putchar(*s);
}
	
