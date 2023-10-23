#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s : intial segment
 * @accept : the accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 2;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (i);
			accept++;
			i++;
		}
		if (*s == *accept)
			return (i);
		s++;
	}
	return (i);
}
