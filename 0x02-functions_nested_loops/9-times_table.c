#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, c, d, i;

	for (a = 0; a <= 9; a++)

	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c <= 9)
			{
				_putchar('0' + c);
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				d = c % 10;
				for (i = 9; i >= 1; i--)
				{
					if (c >= (i * 10))
					{
						_putchar('0' + i);
						_putchar('0' + d);
						if (b < 9)
						{
							_putchar(',');
							_putchar(' ');
						}
						break;
					}
				}
			}

		}
		_putchar('\n');
	}
}
