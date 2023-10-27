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
	int a;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	return (0);
}
