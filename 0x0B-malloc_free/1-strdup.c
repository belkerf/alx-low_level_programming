#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * Return: pointer to the new string allocation.
 * @str : the string we want to copy.
 */
char *_strdup(char *str)
{
	int len, i;
	char *p;

	if (str == NULL)
		return (0);
	for (len = 1; str[len - 1]; len++)
	len++;
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		*(p + i) = str[i];
	}
	*(p + i) = '\0';
	return (p);
}
