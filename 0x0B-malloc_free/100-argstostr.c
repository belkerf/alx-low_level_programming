#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * Retuen the concatentes of the args.
 * @ac : argc.
 * @av : argv.
 */
char *argstostr(int ac, char **av)
{
	char **c;
	int i, len, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	c = (char **)malloc(ac * sizeof(char *));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[j + 1]; j++)
		{
			len++;
		}
		c[i] = (char *)malloc(len * sizeof(char));
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; **av || **av == '\0'; j++)
		{
			c[i][j] = **av;
		}
	}
	return (c[i]);
}
