#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0(success)
 */
int main(void)
{
	 /* in ascii 0=> 48 and 9=> 57*/
	int a = 48, b = 48, c = 48;


	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				if ((a != b) && (b != c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a == 55) && (b == 56) && (c == 57))
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			c++;
			b = b + 2;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
