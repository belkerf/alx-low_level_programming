#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * Return: 1 if greater than 0 ,0 if 0, -1 if less than 0.
 * @n : the number we want to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
