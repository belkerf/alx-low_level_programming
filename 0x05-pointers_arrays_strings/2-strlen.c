#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * Return: the length of a string.
 * @s : the string.
 */
int _strlen(char *s)
{
	int a = 1;

	while (s)
	{
		a++;
		s++;
	}
	return (a);
}

