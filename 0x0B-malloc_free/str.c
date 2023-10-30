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
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; *str; str++)
        {
                len++;
        }
        len++;
	arr = (char*)malloc(len);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
