#include "main.h"
/**
 * print_triangle -  function that prints a triangle.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, n;

	for (n = 0; n < size; n++)
	{
		if (size > 0)
		{
			for (i = 1; i < (size - n); i++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= n; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
