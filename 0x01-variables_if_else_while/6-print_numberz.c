#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0(success)
 */
int main(void)
{
	/*in ascii 1=> 48 ... 9=> 57*/
	int i = 48;

	/*printing the single digits from 1 to 9*/
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
