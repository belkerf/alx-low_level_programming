#include "main.h"
/**
 * _strstr - function that locates a substring.
 * Return:  pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 * @haystack : the string we looking in.
 * @neesle : the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0, k;

	while (*haystack != '\0')
	{
		k = 1;
		j = 0;
		while (needle[j] != '\0')
		{
			if (*haystack == needle[j])
			{
				k = 0;
				break;
			}
			else
				break;
		}
		if (k == 0)
			break;
		haystack++;
	}
	if (k == 0)
		return (haystack);
	else
		return ('\0');
}
