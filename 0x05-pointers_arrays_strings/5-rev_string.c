#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s : the string we want reverse
 */
void rev_string(char *s)
{
	char str[3000];
	int a = 0, i = 0, k;

	/*finding the length of s*/
	while (*s)
	{
		a++;
		s++;
	}
	a--;
	/*reverse s into str*/
	while (i <= a)
	{
		k = (a - i);
		str[i] = s[k];
		i++;
	}
	i--;
	a = 0;
	/*put str into s*/
	while (a <= i)
	{
		s[a] = str[a];
		a++;
	}
}
