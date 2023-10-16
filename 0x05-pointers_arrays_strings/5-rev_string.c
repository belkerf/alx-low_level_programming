#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s : the string we want reverse
 */
void rev_string(char *s)
{
	char str[300];
	int a = 0, i = 0, k;

	while (s[a])
	{
		a++;
	}
	while (i < a)
	{
		k = (a - 1 - i);
		str[i] = s[k];
		i++;
	}
	a = 0;
	while (a <= i)
	{
		s[a] = str[i - a];
		a++;
	}
}
