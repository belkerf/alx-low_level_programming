#include "main.h"
/**
 * check - fonction thet check if the number a is squer of b
 * Return: the squer,
 * @a : the number we want to check.
 * @b : the number we want to check.
 */
int check(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return (check(a + 1, b));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * Return: the natural square of n;
 * @n : the number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
