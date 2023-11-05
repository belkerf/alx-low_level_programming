#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min : the first value.
 * @max : the last value.
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, len;

	if (max < min)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
