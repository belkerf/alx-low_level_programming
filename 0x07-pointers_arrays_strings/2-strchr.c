#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * Return: Returns a pointer to the first occurrence of
 * the character c in the string s
 * or NULL if the character is not found
 * @s : the string we want to localate in
 * @c : the char we want to localte
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	while (*s)
	{
		if (*s == c)
		{
			return (s);
			k = 1;
			s = s + 1000;
		}
		s++;
	}
	if (k == 0)
		return (NULL);
}
