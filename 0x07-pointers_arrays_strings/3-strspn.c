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
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
