#include "main.h"
int check(char **a, int b)
{
	if(**a == '\0')
	{
		return (b);
	}
	else
	{
		return (check((++a), (++b)));
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
