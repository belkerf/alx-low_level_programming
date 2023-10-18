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

	/*A) counting the number of index in src*/
	while (src[i])
	{
		i++;
	}
	/*B) coping n bites from src to dest*/
	while (k < n)
	{
	/*C) checking if the n is less than the number of src*/
		/*C-I) case 1 if n less we copy*/
		if (k < i)
		{
	/*D) checkin that we will not copying '\0' in the first bites */
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
		/*C-II) case 2 if n equale or more we fill the desrt with '\0'*/
		else if (k >= i)
		{
			dest[j] = '\0';
			k++;
			j++;
		}
	}
	/*E) returning the result*/
	return (dest);
}
