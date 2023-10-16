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
	}
	s--;
	while (*s)
	{
		str[a] = *s;
		s--;
		a++;
	}
	while(i < a)
	{
		s[i] = str[i];
		i++;
	}
}
