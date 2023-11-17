#include "main.h"
/**
 * _isdigit - it chechs for digit number
 * @c: the argument
 * Return: 1 if c is a digit Returns 0 otherwise
 */
int _isdigit(int c)
{
	if ((c <= '9') && (c >= '0'))
	{
		return (1);
	}
	else
		return (0);
}
