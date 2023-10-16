#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * Return: the length of a string.
 * @s : the string.
 */
int _strlen(char *s)
{
	/*this function count the number of charachter in text*/
	/*a is our count number it will be set to 0*/
	int a = 0;

	/*the loop here everytime it run will add 1 to a*/
		/*and check if the text still has more*/
	while (s[a])
	{
		a++;
	}
	/*in the end the functoin will return to us the count*/
	return (a);
}

