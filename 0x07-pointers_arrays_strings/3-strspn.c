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
	int i = 0, b, c, k = 0;

	while (s[i] != '\0')
	{
		b = 0;
		c = 1;
		while (accept[b])
		{
			if (s[i] == accept[b])
			{
				c = 0;
				break;
			}
			b++;
		}
		if (c == 0)
		{
			k++;
		}
		i++;
	}
	return (k);
}
