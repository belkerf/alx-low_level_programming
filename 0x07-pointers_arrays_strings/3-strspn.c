#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * Retur: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s : intial segment
 * @accept : the accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 1;
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (i);
			accept++;
		}
		if (*s == *accept)
			return (i);
		i++;
		s++;
	}
	return (i);
}
