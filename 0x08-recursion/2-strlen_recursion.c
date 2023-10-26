#include "main.h"
int check(char **a, int b)
{
	if(**a == '\0')
	{
		return (b);
	}
	else if (**a != '\0')
	{
		return (check(*(a + 1), (b + 1)));
	}
}
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return: the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	char **p = &s;

	return (check(p, 1));
}
