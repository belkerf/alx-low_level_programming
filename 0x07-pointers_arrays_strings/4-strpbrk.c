#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 * @s : the string we search in.
 * @accept : the string we try to serch for.
 */
char *_strpbrk(char *s, char *accept)
{
	int k  = 1;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				k = 0;
				break;
			}
			accepet++;
		}
		if (k == 0)
		{
			break;
		}
		s++;
	}
	if (k == 0)
	{
		return (s);
	}
	else
		return ('\0');
}
