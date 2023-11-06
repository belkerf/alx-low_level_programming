#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char c[] = "Error\n";
	int mul, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (argc != 3 || num1 == 0 || num2 == 0)
	{
		while (c)
		{
			_putchar(*c);
			c++;
		}
		exit(98);
	}
	mul = num1 * num2;
	return (0);
}
