#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str : the string we working on.
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
