#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * Return: the factorila of n.
 * @n : the number we want to calul.
 */
int factorial(int n)
{
	if (n == 0)
	{
		factorial(0) = 1;
	}
	else if (n > 0)
	{
		factorial(n) = n * factorial(n - 1);
	}
	else if (n < 0)
		return (-1);
	return (factorial(n));
}
