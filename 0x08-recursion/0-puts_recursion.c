#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s : the string we workin on.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
