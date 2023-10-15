#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * Return: it return 1 if chrchtr is lower if not 0
 * @c : the charachter we want to check
 */
int _islower(int c)
{
	if ((c >= 97) || (c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
