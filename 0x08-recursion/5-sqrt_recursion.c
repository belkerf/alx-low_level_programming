#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * Return: the natural square of n;
 * @n : the number
 */
int _sqrt_recursion(int n)
{
	int i = 1, j;

	if (n == 0)
	{
		return (0);
	}
	else if (n > 0 && i <= n)
	{
		j = n / i;
		if (n % i == 0 && j == i)
		{
			return (i);
		}
		else
		{
			i++;
			_sqrt_recursion(n);
		}
	}
	else
		return (-1);
}
