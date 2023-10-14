#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %s and is greater than 5", n, srand);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %s and is 0", n, srand);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("last digit of %d is %s and is less than 6 and not 0", n, srand);
	}
	return (0);
}
