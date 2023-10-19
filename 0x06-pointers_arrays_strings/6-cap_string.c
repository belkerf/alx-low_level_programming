#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * Return: the result string.
 * @c : the first string before the capitalization.
 */
char *cap_string(char *c)
{
	int i = 0, k = 0;
	char s[] = {' ','\t','\n',',',';','.','!','?','"',')','{','}','('};

	while (c[i])
	{
		k = 0;
		while (s[k])
		{
			if ((c[i] == s[k]))
			{
				if ((c[i + 1] >= 'a') && (c[i + 1] <= 'z'))
					c[i + 1] = c[i + 1] - 32;
			}
			k++;
		}
		i++;
	}
	return (c);
}
