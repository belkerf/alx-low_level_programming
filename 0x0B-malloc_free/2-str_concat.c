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

	if (s1[0] != '\0' || s1 != NULL)
	{
		while ( s1[len1])
			len1++;
		len1++;

	}
	if (*s2 != '\0' || s2 != NULL)
	{
		while (s2[len2])
			len2++;
		len2++;
	}
	len = len1 + len2 + 1;
	if (*s2 == '\0' || s2 == NULL)
	{
		p = (char *)malloc(len1 * sizeof(char));
		for (i = 0; i < len1 - 1; i++)
			*(p + i) = s1[i];
		*(p + i) = '\0';
		return (p);
	}
	else if (s1[0] == '\0' || s1 == NULL)
	{
		p = (char *)malloc(len2 * sizeof(char));
		for (i = 0; i < len2 - 1; i++)
			*(p + i) = s2[i];
		*(p + i) = '\0';
		return (p);
	}
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (0);
	for (i = 0; i < len1 - 1; i++)
		*(p + i) = s1[i];
	j = 0;
	for (; i < len; i++)
	{
		*(p + i) = s2[j];
		j++;
	}
	*(p + i) = '\0';
	return (p);
}
