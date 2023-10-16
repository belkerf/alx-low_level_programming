#include "main.h"
#include <stdio.h>
/**
 * _puts -  function that prints a string, followed by a new line
 * to stdout.
 * @str : the string.
 */
void _puts(char *str)
{
	int i = 0, a;
	char c;

	a = _strlen(str);

	while (i < a)
	{
		c = str[i];
		putchar(c);
		i++;
	}
	putchar('\n');
}
