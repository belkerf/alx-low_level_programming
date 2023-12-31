#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * Return:  pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated
 * @s1 : the first concatentaion.
 * @s2 : the second conctenation.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *p;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			*(p + i) = s1[i];
			i++;
		}
	}
	if (s2)
	{
		for (; i < (len1 + len2); i++)
		{
			*(p + i) = s2[j];
			j++;
		}
	}
	*(p + i) = '\0';
	return (p);
}
