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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
