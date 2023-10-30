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
	char *arr;
	int i, len = 0;

	for (len = 0; *str; len++)
	{
		str++;
	}
	if (len == 0)
	{
		return ('\0');
	}
	else
	{
		if (str[0] == '\0')
			len = 0;
		arr = malloc(len * sizeof(char));
		for (i = 0; i < len; i++)
		{
			arr[i] = str[i];
		}
		return (arr);
	}
}
