#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * Return : the length of the string
 * @s :the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		s++;
		_strlen_recursion(s);
		i++;
	}
	return (i);
}
