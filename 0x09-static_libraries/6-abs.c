#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * Return: the absolute value of an integer.
 * @c : the integer.
 */
int _abs(int c)
{
	int a;

	if (c >= 0)
	{
		return (c);
	}
	else
	{
		a = c * (-1);
		return (a);
	}
}
