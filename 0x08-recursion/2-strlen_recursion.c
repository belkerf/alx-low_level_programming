#include "main.h"
int check(char **a, int b)
{
	if (a[b] && a[b] != '\0')
	{
		return (check(a, ++b));
	}
	else
		return (b);
}
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return: the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	char **p = &s;

	return (check(p, 0));
}
