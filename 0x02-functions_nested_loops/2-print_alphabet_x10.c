#include "main.h"
/**
 * print_alphabet_x10 - functoin that prints 10 times alphabet
 */
void print_alphabet_x10(void)
{
	/* in ascii a => 97 & z =>122*/
	int a = 97, b = 0;

	while (b <= 9)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		b++;
	}
	_putchar('\n');
}
