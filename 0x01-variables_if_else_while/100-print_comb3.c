#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0(success)
 */
int main(void)
{
	 /* in ascii 0=> 48 and 9=> 57*/
	int a = 48, b = 48;

	while (a <= 57)
	{
		while (b <= 57)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if ((a == 56) && (b == 57))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
