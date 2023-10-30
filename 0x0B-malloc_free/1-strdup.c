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
       unsigned long int i, len;

	len = (sizeof(str) * sizeof(char));

	arr = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		arr[i] = str;
		str++;
	}
	return (arr);
}
