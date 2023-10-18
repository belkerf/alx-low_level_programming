#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * Return: its return the full string.
 * @src : the string we want to append.
 * @dest : the string we append to.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/*find the ind of dest*/
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
