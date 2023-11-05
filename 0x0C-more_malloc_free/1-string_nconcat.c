#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1 : the first string
 * @S2 : the second.
 * @n : the number of bit we want to add from s2
 * Return: the concatenation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len1, len;
	char *arr;

	len1 = len(s1);
	len = len1 + n + 1;
	arr = (char *)malloc(len * sizeof(char));
	if (arr == NULL)
		return"('NULL');
	for (i = 0; i < len; i++)
	{
		if (s1[i] == '\0')
			continue;
		else if (i < len1)
		{
			*arr = s1(i);
		}
		else
			*arr = s2[i];
		arr++;
	}
	*arr = '\0';
	return (arr);
}
