#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of
 * a string to uppercase.
 * Return: the string after working on it.
 * @c : the string we want to upper.
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if ((c[i] >= 97) && (c[i] <= 122))
		{
			c[i] = (c[i] - 32);
		}
		i++;
	}
	return (c);
}
