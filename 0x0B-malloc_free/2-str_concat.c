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
	int len1, len2, len, i = 0, j;
	char *p;

	for (len1 = 1; s1[len1 - 1]; len1++)
	for (len2 = 1; s2[len2 - 1]; len2++)
	len = len1 + len2 + 1;
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (0);
	if (len1 > 1)
	{
		for (i = 0; i < len1; i++)
		{
			*(p + i) = s1[i];
		}
	}
	else
		i = 0;
	j = 0;
	if (len2 > 1)
	{
		for (; i < len; i++)
		{
			*(p + i) = s2[j];
			j++;
		}
	}
	*(p + i) = '\0';
	return (p);
}
