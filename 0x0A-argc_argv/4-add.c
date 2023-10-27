#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry piont of our prog.
 * Return: always 0 (success).
 * @argc : the counter of argv.
 * @argv : the array of argument in command lines.
 */
int main(int argc, char *argv[])
{
	int a = 0, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				a += atoi(argv[i]);
			}
		}
		printf("%d\n", a);
	}
	return (0);
}
