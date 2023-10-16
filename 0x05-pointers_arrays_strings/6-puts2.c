#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str : the string
 */
void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		_putchar[*str];
		str = str + 2;
	}
}
