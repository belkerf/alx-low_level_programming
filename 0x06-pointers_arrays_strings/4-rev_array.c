#include "main.h"
/**
 * reverse_array - that reverses the content of an array of integers.
 * @a : the array we want to reverse.
 * @n : the number of element we want to reverse from a.
 */
void reverse_array(int *a, int n)
{
	int k[200];
	int j = 0;

	while (j <= n)
	{
		k[j] = a[n - j];
		j++;
	}
	j = 0;
	while (j <= n)
	{
		a[j] = k[j];
		j++;
	}


}
