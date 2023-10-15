#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * Return: the last digit.
 * @c : the digit.
 */
int print_last_digit(int c)
{
	int a, b;

	if ((c < 10) && (c >= 0))
	{
		_putchar('0' + c);
	}
	else if (c >= 10)
	{
		a = c % 10;
		while (a > 9)
		{
			a = c % 10;
		}
		_putchar('0' + a);
	}
	else if (c < 0)
	{
		c = c * (-1);
		if ((c < 10) && (c >= 0))
		{
			_putchar('0' + c);
		}
		else if (c >= 10)
		{
			a = c % 10;
			while (a > 9)
			{
				a = c % 10;
			}
			_putchar('0' + a);
		}
	}
}
