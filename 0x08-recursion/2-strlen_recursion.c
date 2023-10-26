#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return : the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		_strlen_recursion(s + 1);
	}
	else
		i = 0;
	i++;
	return (i);
}
