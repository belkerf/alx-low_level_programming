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
	int i, a = 0, b, k = 0;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		if (a <= 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (a >= arr[i] && a % arr[i] == 0)
				{
					b = a / arr[i];
					k += b;
					printf("%d\n", k);
					break;
				}
				else if (a > arr[i] && a % arr[i] != 0)
				{
					b = a / arr[i];
					k += b;
					a = a % arr[i];
				}
			}
		}
	}
	return (0);
}
