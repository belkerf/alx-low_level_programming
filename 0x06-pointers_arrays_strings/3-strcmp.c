#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * Return: -15 if s1 less than s2, 0 if s1 & s2 equal,15 if s1 bigger than s2.
 * @s1 : the first string.
 * @s2 : the second string.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}
