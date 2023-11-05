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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *arr;

	while (s1[len1] && s1)
		len1++;
	while (s2[len2] && s1)
		len2++;
	if (n >= len2)
		 arr = malloc(sizeof(char) * (len1 + len1 + 1));
	else
		arr = malloc(sizeof(char) * (len1 + n + 1));
	if (!arr)
		return (NULL);
	while (i < len1)
	{
		arr[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		arr[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		arr[i++] = s2[j++];
	}
	*arr = '\0';
	return (arr);
}
