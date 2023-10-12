#include "main.h"
/**
 *more_numbers - function that prints 10 times the numbers,
 *from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = 0;
			_putchar('0' + b);
			if (c == 9)
			{
				_putchar('1');
			}

			if (b == 9)
			{
				b = 1;
			}

			if ((c == 9) && (b == 5))
			{
				b = 9;
			}
			c++;
		}
		_putchar('\n');
	}
}
