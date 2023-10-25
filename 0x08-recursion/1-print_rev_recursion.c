#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s : the string we want to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	if (*s)
	{
		_print_rev_recursion(*(s + 1))
	}
}
