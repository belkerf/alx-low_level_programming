#include "main.h"
/**
 * check - function that check if b is prime number.
 * Return: 1 is yes 0 if not.
 * @a : number checker.
 * @b : the number we check.
 */
int check(int a, int b)
{
	if (b % a == 0 && a != b)
	{
		return (0);
	}
	else if (a >= b)
	{
		return (1);
	}
	else
		return (check(a + 1, b));
}
/**
 * is_prime_number - function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * Return: 1 if it prime 0 if it not.
 * @n : the number we want to check.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(2, n));
	}
}
