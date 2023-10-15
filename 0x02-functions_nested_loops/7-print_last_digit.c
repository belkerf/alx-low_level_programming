#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * Return: the last digit.
 * @c : the digit.
 */
int print_last_digit(int c)
{
	if ((c < 10) && (c >= 0))
	{
		_putchar('0' + c);
		return (c);
	}
	else if (c >= 10)
	{
		c = c % 10;
		while (c > 9)
		{
			c = c % 10;
		}
		_putchar('0' + c);
		return (c);
	}
	else if (c < 0)
	{
		c = c * (-1);
		if ((c < 10) && (c >= 0))
		{
			_putchar('0' + c);
			return (c);
		}
		else if (c >= 10)
		{
			c = c % 10;
			while (c > 9)
			{
				c = c % 10;
			}
			_putchar('0' + c);
			return (c);
		}
	}
}
