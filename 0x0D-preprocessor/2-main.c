#include <stdlib.h>
#include <stdio.h>
#include "main.h"
int main()
{
	int i;
	char *p;

	p = __FILE__;
	while (p[i])
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
