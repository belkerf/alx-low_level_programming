#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * Return: it returns dest.
 * @src : the string we want to copy.
 * @dest : the destination where we copy.
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (*dest);
}
