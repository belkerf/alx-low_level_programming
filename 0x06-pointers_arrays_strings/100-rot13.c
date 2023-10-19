#include "main.h"
/**
 * root13 - a function that encodes a string using rot13.
 * Return : the encoded string.
 * @c : the string we want to encode.
 */
char *rot13(char *c)
{
	int i = 0, j;
	char s, f;

	while (c[i])
	{
		while ((c[i] >= 'a') && (c[i] <= 'z'))
		{
			f = c[i + 13];
			j = 'z' - f;
			if (j >= 0)
			{
				c[i] = f;
				break;
			}
			else
			{
				c[i] = 'a' - j;
				break;
			}
		}
		i++;
	}
	return (c);
}
