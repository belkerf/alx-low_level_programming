#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s : the string we want reverse
 */
void rev_string(char *s)
{
	char str[300];
	int a = 0, i = 0;

	while (*s)
	{
		s++;
		a++;
	}
	while (i < a)
	{
		str[i] = s[a - 1 - i];
		i++;
	}
	a = 0;
	while(a <= i)
	{
		s[a] = str[i - a];
		a++;
	}
}
