#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s : the string we want reverse
 */
void rev_string(char *s)
{
	char st[1000];
	int len = 0, i = 0, k;

	/*finding the length of s*/
	while (*s)
	{
		len++;
		s++;
	}
	/*reverse s into str*/
	while (i < len)
	{
		k = (len - 1 - i);
		str[i] = s[k];
		i++;
	}
	i = 0;
	/*put str into s*/
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
}
