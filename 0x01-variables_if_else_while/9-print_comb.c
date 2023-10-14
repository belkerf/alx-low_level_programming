#include <stdio.h>
/**
 *main - the starting of the program
 *Return: always 0(success)
 */
int main(void)
{
	/* to print the digits from 1 to 9 we need its asccii value*/
	/* in ascii  0 => 48 9=> 57 */
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
