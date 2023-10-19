#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * Return: the result string.
 * @c : the first string before the capitalization.
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		if ((c[i] == ' ') || (c[i] == '.'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
				c[i + 1] = c[i + 1] - 32;
		}
		if ((c[i] == '\n') || (c[i] == '\t'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
				c[i + 1] = (c[i + 1] - 32);
		}

		i++;
	}
	return (c);
}
