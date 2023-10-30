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
	int i = 0; len = 0;

	if (*str == '\0')
		return ('\0');
	else
	{
		while (*str)
		{
			len++;
			str++;
		}
		arr = malloc(len * sizeof(char));
		while (i < len)
		{
			arr[i] = str[i];
			i++;
		}
		return (arr);
		free(arr);
	}
}
