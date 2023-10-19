#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of
 * a string to uppercase.
 * Return: the string after working on it.
 * @c : the string we want to upper.
 */
char *string_toupper(char *c)
{
	while (*c)
	{
		if ((*c >= 'a') && (*c <= 'z'))
		{
			*c = (*c - 32);
		}
		c++;
	}
	return (c);
}
