#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * Return: function that checks for alphabetic character if not 0
 * @c : the charachter we want to check
 */
int _isalpha(int c)
{
	/* if c is characher should be in ascii between */
	/* a => 97 and z => 122 or A =>65 and Z=>90*/
			/*the checking*/
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
		return (0);
}
