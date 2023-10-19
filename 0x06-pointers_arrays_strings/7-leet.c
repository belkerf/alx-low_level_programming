#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337.
 * Return: the encoder string.
 * @c : the original string.
 */
char *leet(char *c)
{
	char le[] = "43071";
	char l1[] = "AEOTL";
	int i = 0, k;

	while (c[i])
	{
		k = 0;
		while (l1[k])
		{
			if ((c[i] == l1[k]) || (c[i] == (l1[k] + 32)))
				c[i] = le[k];
			k++;
		}
		i++;
	}
	return (c);
}
