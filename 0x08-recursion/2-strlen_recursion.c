#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return : the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		i = 1;
	else if (*s && *s != '\0')
	{
		_strlen_recursion(s + 1);
		s--
		i++;
	}
	return (i);
}
