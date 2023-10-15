#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * Return: the last digit.
 * @c : the digit.
 */
int print_last_digit(int c)
{
	int a;

	if ((c < 10) && (c >= 0))
	{
		return (c);
	}
	else if (c >= 10)
	{
		a = c % 10;
		while (a > 9)
		{
			a = c % 10;
		}
		return (a);
	}
	else if (c < 0)
	{
		c = c * (-1);
		if ((c < 10) && (c >= 0))
		{
			return (c);
		}
		else if (c >= 10)
		{
			a = c % 10;
			while (a > 9)
			{
				a = c % 10;
			}
			return (a);
		}
	}
}
