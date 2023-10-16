#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str : the string we working on.
 */
void puts_half(char *str)
{
	int i = 0, b;

	while (str[i])
	{
		i++;
	}
	if ((i / 2) == 0)
	{
		b = (i / 2);
	}
	else
	{
		b = ((i - 1) / 2);
	}
	while (str[b])
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
