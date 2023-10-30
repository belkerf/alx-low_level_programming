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
	char *arr;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));
	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
