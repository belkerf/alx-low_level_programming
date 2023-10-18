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
	int i = 0, j = 0, k = 0;

	/*counting the number of index in src*/
	while (src[i])
	{
		i++;
	}
	/*coping n bites from src to dest*/
	while (k < n)
	{
	/*checking that we will not copying a '\0' in the first bites */
		if (k <= i)
		{
			if (src[j] != '\0')
			{
				dest[j] = src[k];
				k++;
				j++;
			}
			else
			{
				k++;
				j++;
			}
		}
		else if (k > i)
		{
			dest[j] = '\0';
			k++;
			j++;
		}
	}
	/*returning the result*/
	return (dest);
}
