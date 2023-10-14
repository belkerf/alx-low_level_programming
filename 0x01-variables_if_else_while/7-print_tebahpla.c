#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0(success)
 */
int main(void)
{
	/*in ascii a=> 97 and z => 122*/
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
