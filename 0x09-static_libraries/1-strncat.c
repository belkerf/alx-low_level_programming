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
	int i = 0, j = 0, k = 0;

	/*finding the end of dest*/
	while (dest[i])
	{
		i++;
	}
	/*finding the end of src*/
	while (src[k])
	{
		k++;
	}
	/*fix the number of the bytes n if is more than we have in src*/
	if (n > k)
	{
		n = k;
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
