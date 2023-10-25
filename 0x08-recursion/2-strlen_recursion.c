#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return : the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	i++;
	if (*s)
	{
		_strlen_recursion(s + 1);
	}
	if (*s == '\0')
		return (i);
}
