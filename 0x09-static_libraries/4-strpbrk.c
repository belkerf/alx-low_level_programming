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
	int i = 0, j, k  = 1;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 0)
		{
			break;
		}
		i++;
	}
	if (k == 0)
	{
		while (k < i)
		{
			s++;
			k++;
		}
		return (s);
	}
	else
		return ('\0');
}
