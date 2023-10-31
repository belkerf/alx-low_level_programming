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
	char *c;
	int i, len, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		if (j = 0; av[j]; j++)
		{
			len++;
		}
		acc++;
	}
	c = (char *)malloc(len * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < len; arv++)
	{
		if (*arv != '\0')
		{
			*( c + i) = *arv;
			i++;
		}
	}
	return (c);
}
