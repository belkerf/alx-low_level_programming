#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * Return: the result string.
 * @dest : the first string.
 * @src : the second string.
 * @n : the byts we should return from src.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/*finding the end of dest*/
	while (dest[i])
	{
		i++;
	}
	/*adding n byte from src to dest*/
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	/*returning the result string that is stored in dest*/
	return (dest);
}
