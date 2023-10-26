#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * Return: the result.
 * @x : the number.
 * @y : the power.
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		i = 1;
	}
	else if (y > 0)
	{
		i = i * _pow_recursion(x, y--);
	}
	return (i);
}
