#include "main.h"
/**
 * _strncpy - function that copies a string.
 * Return: the string we copyed.
 * @dest : where we should copy the string.
 * @src : the string we copy.
 * @n : the number of byte we copy from src.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/*counting the number of index in src*/
	while (src[i])
	{
		i++;
	}
	/*checking that the number n is less or equal to bytes in src*/
	if (n > i)
	{
		n = i;
	}
	/*coping n bites from src to dest*/
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	/*returning the result*/
	return (dest);
}
