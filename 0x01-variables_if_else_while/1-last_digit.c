#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: assigns a random number to n
 *
 * Return:  0 if Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n > 5);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n = 0);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n < 6);
	}
	return (0);
}
