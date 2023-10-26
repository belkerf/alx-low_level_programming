#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * Return: the natural square of n;
 * @n : the number
 */
int check(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return(-1);
	}
	return (check(a + 1, b));
}
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1,n));
}
