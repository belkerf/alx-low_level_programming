#include <stdio.h>
/**
 * main - the entry point of our program
 * Return: always 0(success)
 */
int main(void)
{
	int i = 97;

	/*printing lowercase charachers*/
	while (i <= 122)
	{
		putchar(i);
		i++;
		if (i == 123)
		{
			i = 65;
			/*printing upercase charachters*/
			while (i <= 90)
			{
				putchar(i);
				i++;
				if (i == 91)
				{
					putchar('\n');
					i = 200;
				}
			}
		}
	}
	return (0);
}
