#include <stdio.h>
/**
 * main - the entry point of the program
 * Return: always 0(success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if ((i != 113) && (i != 101))
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
