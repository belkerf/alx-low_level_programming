#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * Return: the last digit.
 * @c : the digit.
 */
int print_last_digit(int c)
{
	int a = (c % 10);

	if (c < 0)
	{
		a = -a;
		_putchari('0' + a);
		return (a);
	}
	else
		_putchar('0' + a);
		return (a);
	}
}
