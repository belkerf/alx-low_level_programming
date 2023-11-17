#include "stdlib.h"
#include "stdio.h"
/**
 * main - the entry point of the program.
 * Return: always 0 (success).
 * @argc : the counter argument.
 * @argv : the array of argument we enter.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
