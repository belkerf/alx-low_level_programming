#include "main.h"
/**
 * print_alphabet - function that print the alphabet
 */
void print_alphabet(void)
{
	/*in ascii a => 97 & z => 122*/
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
