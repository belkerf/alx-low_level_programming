#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0(success)
 */
int main(void)
{
	/*to print the base 16 numbers we need to print frm 1 to 9 and frm a to f*/
	 /* in ascii 0=> 48 and 9=> 57*/
	 /* ******** a=> 97 and f => 102*/
	int i = 48;

	/* I) printing from 1 to 9*/
	while (i <= 57)
	{
		putchar(i);
		i++;
		if (i == 58)
		{
	/* II) printing from a to f*/
			i = 97;
			while (i <= 102)
			{
				putchar(i);
				i++;
				if (i == 103)
				{
					i = 200;
				}
			}
		}
	}
	/* III) printing new line */
	putchar('\n');
	return (0);
}
