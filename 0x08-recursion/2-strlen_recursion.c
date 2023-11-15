#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return: the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	int a;

	a = 0;
	if (*s)
	{
		a++;
		a += _strlen_recursion(++s);
	}
	return (a);
}
