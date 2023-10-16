#include "main.h"
/**
 * _puts -  function that prints a string, followed by a new line
 * to stdout.
 * @str : the string.
 */
void _puts(char *str)
{
	int len, a = 0;
	char c;

	len = _strlen(str);
	while (a < len)
	{
		c = str[a];
		_putchar(c);
		a++;
	}
	_putchar('\n');
}
