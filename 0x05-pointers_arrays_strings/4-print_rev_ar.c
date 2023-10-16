#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s : the string we want to reverse.
 */
/*this function took a text and print it in reverse within 2 steps*/
void print_rev(char *s)
{
	/* I) the loop run until the cursor after the last charachter*/
	while (*s)
	{
		s++;
	}
	/* II) this operation move the cursor back to the last charachter*/
	s--;
	/* III) the loop print char by char from the last one to the first*/
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	/* IV) in the end we move the cursor down to the new line*/
	_putchar('\n');
}
