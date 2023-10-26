#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * Return: the natural square of n;
 * @n : the number
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
		return (-1);
	else if (i * i == n)
	{
		return (i);
	}
	else
		return (-1);
}
