#include "stdio.h"
/**
 * _puts -  function that prints a string, followed by a new line
 * to stdout.
 * @str : the string.
 */
void _puts(char *str)
{
	int i = 0, a;
	a = _strlen(str);
	char c;

	while (i < a)
	{
		c = str[i];
		putchar(c);
		i++;
	}
	putchar('\n');
}
