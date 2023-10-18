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

	while (dest[i])
	{
		if (dest[i] == '\0')
		{
			while (src[j])
			{
				dest[i + j] = src[j];
			}
		}
		i++;
	}
	return (dest);
}
