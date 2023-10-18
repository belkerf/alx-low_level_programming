#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * Return: -15 if s1 less than s2, 0 if s1 & s2 equal,15 if s1 bigger than s2.
 * @s1 : the first string.
 * @s2 : the second string.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	/*first of all we check if s1 and are found*/
	if ((s1[0] != '\0') && (s2[0] != '\0'))
	{
		/*A) counting the size of s1 and s2*/
		while (s1[i])
			i++;
		while (s2[j])
			j++;
		/*B) comparing the sizes*/
			/*B-I) if s1 biger than s2 return 15*/
		if (i > j)
			return (15);
			/*B-II) if s1 less than s2 return -15*/
		else if (i < j)
			return (-15);
			/*B-III) if s1 equal s2 return 0*/
		else
			return (0);
	}
}
