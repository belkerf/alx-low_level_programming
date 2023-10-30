#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 * Return: pointer to the array we create.
 * @size : the size of the array.
 * @c : the char we initial with.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char*)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
		free(arr);
	}
}
