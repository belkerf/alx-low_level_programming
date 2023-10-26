#include "main.h"
int check(char *a, int b)
{
	if(*a == '\0')
	{
		return (b);
	}
	else if (*a != '\0')
	{
		a++;
		return (check(a, b + 1);
	}
}
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return: the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	return (check(char *s, 1));
}
