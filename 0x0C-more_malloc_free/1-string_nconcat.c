#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1 : the first string
 * @s2 : the second.
 * @n : the number of bit we want to add from s2
 * Return: the concatenation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, len;
	char *arr;

	for (len1 = 0; s1[len1]; len1++)
	len1++;
	for (len2 = 0; s2[len2]; len2++)
	len2++;
	if (n >= len2)
		len = len1 + len2;
	else
		len = len1 + n;
	arr = (char *)malloc(len * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (s1[i] == '\0')
			*(arr + i) = s2[0];
		else if (i < len1)
		{
			*(arr + i) = s1[i];
		}
		else
			*(arr + i) = s2[i - len1];
	}
	*arr = '\0';
	return (arr);
}
