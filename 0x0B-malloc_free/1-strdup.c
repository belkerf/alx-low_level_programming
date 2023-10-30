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
	arr = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
